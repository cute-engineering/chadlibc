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
#include <errno.h>
#include <signal.h>

static void (*signal_handlers[7])(int);

static void
default_sig_handler(int sig)
{
	/* TODO */
	(void)sig;
}

static void
ignore_sig_handler(int sig)
{
	(void)sig;
}

void (*signal(int sig, void (*func)(int)))(int)
{
	void (*old_func)(int) = signal_handlers[sig];

	if (sig > 6 || sig < 0)
	{
		errno = EDOM;
		return SIG_ERR;
	}

	if (func == SIG_DFL)
	{
		signal_handlers[sig] = default_sig_handler;
	}
	else if (func == SIG_IGN)
	{
		signal_handlers[sig] = ignore_sig_handler;
	}
	else
	{
		signal_handlers[sig] = func;
	}

	return old_func;
}

int
raise(int sig)
{
	if (sig > 6 || sig < 0)
	{
		errno = EDOM;
		return 1;
	}

	signal_handlers[sig](sig);
	return 0;
}
