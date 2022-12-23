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
#include <chadlibc/ansi-sysdeps.h>
#include <stdlib.h>

extern void (*__chadlibc_atexit[])(void);

void
exit(int status)
{
	int i;
	for (i = 0; i < ATEXIT_MAX; i++)
	{
		if (__chadlibc_atexit[i] != NULL)
			__chadlibc_atexit[i]();
	}

	sys_exit(status);
}
