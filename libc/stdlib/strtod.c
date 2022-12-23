/*
 * Copyright 2022 Cute Engineewing 
 *
 * This file is part of ChadLibC.
 *
 * ChadLibC is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free 
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * ChadLibC is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with ChadLibC. If not, see <https://www.gnu.org/licenses/>.
 */
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
