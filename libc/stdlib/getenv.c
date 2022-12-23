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
#include <string.h>

extern char **__chadlibc_environ;

char *
getenv(const char *name)
{
	int i;
	for (i = 0; __chadlibc_environ[i] != NULL; i++)
	{
		char *env = __chadlibc_environ[i];
		char *env_name = env;
		while (*env != '=' && *env != '\0')
		{
			env++;
		}
		if (strncmp(env_name, name, env - env_name) == 0)
		{
			return env + 1;
		}
	}
	return NULL;
}
