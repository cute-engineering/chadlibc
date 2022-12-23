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
#include <string.h>

int
memcmp(const void *s1, const void *s2, size_t n)
{
	const char *cs1;
	const char *cs2;

	cs1 = (const char *)s1;
	cs2 = (const char *)s2;
	while (n--)
	{
		if (*cs1 != *cs2)
		{
			return (*cs1 - *cs2);
		}
		cs1++;
		cs2++;
	}
	return (0);
}
