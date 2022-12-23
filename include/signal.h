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
#ifndef _SIGNAL_H
# define _SIGNAL_H 1

typedef int sig_atomic_t;

# define SIGABRT 0
# define SIGFPE	1
# define SIGILL	2
# define SIGINT	3
# define SIGSEGV 4
# define SIGTERM 5

# define SIG_IGN (void (*)(int))0
# define SIG_DFL (void (*)(int))1
# define SIG_ERR (void (*)(int))2

void (*signal(int sig, void (*func)(int)))(int);
int raise(int sig);

#endif /* !_SIGNAL_H */
