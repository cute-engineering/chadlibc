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
#ifndef _STDLIB_H
# define _STDLIB_H 1

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define RAND_MAX 32767

/* Defined by spec to be **at least** 32 */
# define ATEXIT_MAX 32

typedef struct
{
	int quot;
	int rem;
} div_t;

typedef struct
{
	long int quot;
	long int rem;
} ldiv_t;

int abs(int);
div_t div(int, int);
long int labs(long int);
ldiv_t ldiv(long int, long int);
int rand(void);
void srand(unsigned int);

void exit(int);
char *getenv(const char *);
int atexit(void (*)(void));
void abort(void);

double atof(const char *);
int atoi(const char *);
long int atol(const char *);
double strtod(const char *, char **);
long int strtol(const char *, char **, int);
unsigned long int strtoul(const char *, char **, int);

#endif /* !_STDLIB_H */
