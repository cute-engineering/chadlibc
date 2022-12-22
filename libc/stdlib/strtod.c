#include <ctype.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

double
strtod(const char *nptr, char **endptr)
{
	int negative = 0;
	double result = 0.0;
	const char *tmp = NULL;

	negative = *nptr == '-';
	if (*nptr == '+' || *nptr == '-')
		nptr++;

	tmp = nptr;

	while (isdigit(*tmp))
	{
		result *= 10;
		result += *tmp - '0';
		tmp++;
	}

	/* If the number is a float, we need to parse the decimal part */
	if (*tmp == '.')
	{
		double decimal = 10;

		tmp++;

		while (isdigit(*tmp))
		{
			result += (*tmp - '0') / decimal;
			decimal *= 10;
			tmp++;
		}
	}

	/* TODO: pow() is NOT implemented */
	if (*tmp == 'e')
	{
		tmp++;
	}

	if (negative)
	{
		result = -result;
	}

	if (endptr)
	{
		*endptr = (char *)tmp;
	}

	return result;
}

double
atof(const char *nptr)
{
	return strtod(nptr, NULL);
}
