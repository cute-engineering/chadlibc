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
#include <signal.h>
#include <stddef.h>
#include <stdlib.h>

char **__chadlibc_environ = NULL;
void (*__chadlibc_atexit[ATEXIT_MAX])(void);

extern int main(int argc, char *argv[], char *envp[]);

static void
parse_stack(unsigned long *stack, int *argc, char ***argv, char ***envp)
{
	unsigned long *sp = stack;
	*argc = *sp++;
	*argv = (char **)(sp);
	sp += *argc;
	sp++;
	*envp = (char **)(sp);
	__chadlibc_environ = *envp;
}

void
__chadlibc_entry(char *stack)
{
	int argc = 0, i = 0;
	char **argv = NULL;
	char **envp = NULL;

	for (i = 0; i < ATEXIT_MAX; i++)
	{
		__chadlibc_atexit[i] = NULL;
	}

	for (i = 0; i < 7; i++)
	{
		signal(i, SIG_DFL);
	}

	parse_stack((unsigned long *)stack, &argc, &argv, &envp);
	exit(main(argc, argv, envp));
}
