#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
vsprintf(char *str, const char *format, va_list ap)
{
	return vsnprintf(str, strlen(str), format, ap);
}

int
vsnprintf(char *str, size_t size, const char *format, va_list ap)
{
	int ret = 0;
	int pad = 0;
	int sign = 0;
	int justify = 0;
	int space = 0;
	int min_width = 0;
	int has_pres = 0;
	int precision = 0;
	int length = 0;

	char conv_type = 0;
	const char *fmt = format;

	while (*fmt)
	{
		while (*fmt && *fmt != '%')
		{
			if (size > 1)
			{
				*str++ = *fmt++;
				size--;
			}
			else
			{
				fmt++;
			}

			ret++;
		}

		if (!fmt)
		{
			break;
		}
	}

	fmt++;

	while (*fmt)
	{
		switch (*fmt)
		{
		case '0':
			pad = 1;
			break;
		case '-':
			justify = 1;
			break;
		case '+':
			sign = 1;
			break;
		case ' ':
			space = 1;
			break;
		}

		fmt++;
	}

	if (*fmt && *fmt == '*')
	{
		fmt++;
		min_width = va_arg(ap, int);

		if (min_width < 0)
		{
			min_width = 0;
		}
	}

	if (*fmt && *fmt == '.')
	{
		fmt++;
		has_pres = 1;

		if (*fmt && *fmt == '*')
		{
			fmt++;
			precision = va_arg(ap, int);

			if (precision < 0)
			{
				precision = 0;
			}
		}
		else
		{
			while (*fmt && isdigit(*fmt))
			{
				precision = precision * 10 + (*fmt++ - '0');
			}
		}
	}

	while (*fmt && *fmt == 'l')
	{
		fmt++;
		length++;
	}

	if (!*fmt)
	{
		conv_type = 0;
	}
	else
	{
		conv_type = *fmt++;
	}

	switch (conv_type)
	{
	case 'i':
		/* FALLTHROUGH */
	case 'd':
		break;
	case 'u':
		break;
	case 'x':
		break;
	case 's':
		break;
	case 'c':
		break;
	case 'n':
		break;
	case 'p':
		break;
	case '%':
		break;
	case 'f':
		break;
	case 'g':
		break;
	default:
		/* FALLTROUGH */
	case 0:
		break;
	}

	if (size > 0)
	{
		*str = 0;
	}

	return size;
}
