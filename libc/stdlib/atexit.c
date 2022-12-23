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
#include <stddef.h>
#include <stdlib.h>

static int atexit_count = 0;

extern void (*__chadlibc_atexit[])(void);

int
__cxa_atexit(void (*func)(void *), void *arg, void *dso)
{
	(void)arg;
	(void)dso;

	if (arg || dso)
		return -1;

	if (atexit_count >= ATEXIT_MAX)
		return -1;

	/* this is cursed and not portable */
	__chadlibc_atexit[atexit_count] = (void (*)(void))func;
	__atomic_fetch_add(&atexit_count, 1, __ATOMIC_SEQ_CST);

	return 0;
}

int
atexit(void (*func)(void))
{
	return __cxa_atexit((void (*)(void *))func, NULL, NULL);
}
