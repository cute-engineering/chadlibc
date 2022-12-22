#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

/* This is very loosely based on glibc's implementation */
static unsigned long int
strtou(const char *nptr, char **endptr, int base, unsigned long int max,
	   unsigned long int min)
{
	int negative = 0, octal = 0, hex = 0, out_of_range = 0, good = 0;
	unsigned long int result = 0, cutoff = 0, cutlim = 0;
	const char *tmp = NULL;

	if (base < 0 || base == 1)
	{
		if (endptr)
		{
			*endptr = (char *)nptr;
		}

		return 0;
	}

	while (isspace(*nptr))
	{
		nptr++;
	}

	negative = *nptr == '-';

	if (*nptr == '+' || *nptr == '-')
		nptr++;

	octal = *nptr == '0';
	hex = octal && (nptr[1] == 'x' || nptr[1] == 'X');

	/* Recognize number prefix and if base is 0 then we need to figure it out */
	if ((base == 0 || base == 16) && hex && isxdigit(nptr[2]))
	{
		nptr += 2;
		base = 16;
	}

	else if ((base == 0 || base == 8) && octal)
	{
		base = 8;
	}

	else if (base == 0)
	{
		base = 0;
	}

	/* NOTE: we could use a lookup table like GNU libc does */
	cutlim = (negative ? min : max) % base;
	cutoff = (negative ? -max : min) / (negative ? -base : base);

	if (negative)
	{
		cutlim = -cutlim;
	}

	tmp = nptr;

	while (*tmp)
	{
		unsigned long int digit = 0;

		if (isdigit(*tmp))
		{
			digit = *tmp - '0';
		}
		else if (isupper(*tmp))
		{
			digit = *tmp - 'A' + 10;
		}
		else if (islower(*tmp))
		{
			digit = *tmp - 'a' + 10;
		}
		else
		{
			break;
		}

		if (digit >= (unsigned long int)base)
		{
			break;
		}

		if (result > cutoff || (result == cutoff && digit > cutlim))
		{
			out_of_range = 1;
		}

		if (!out_of_range)
		{
			result *= base;
			result += digit;
			good = 1;
		}

		tmp++;
	}

	if (negative)
	{
		result = -result;
	}

	if (out_of_range)
	{
		errno = ERANGE;
		return negative ? min : max;
	}

	if (endptr)
	{
		*endptr = good ? (char *)tmp : (char *)nptr;
	}

	return result;
}

unsigned long int
strtoul(const char *nptr, char **endptr, int base)
{
	return strtou(nptr, endptr, base, ULONG_MAX, 0);
}

long int
strtol(const char *nptr, char **endptr, int base)
{
	return (long int)strtou(nptr, endptr, base, LONG_MAX, LONG_MIN);
}

long int
atol(const char *nptr)
{
	return strtol(nptr, NULL, 10);
}

int
atoi(const char *nptr)
{
	return (int)strtol(nptr, NULL, 10);
}
