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
#ifndef _STRING_H
# define _STRING_H 1

# ifdef __cplusplus
extern "C" {
# endif /* __cplusplus */

# include <stddef.h>

void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
char *strcpy(char *, const char *);
char *strncpy(char *, const char *, size_t);

char *strncat(char *, const char *, size_t);
char *strcat(char *, const char *);
int memcmp(const void *, const void *, size_t);
int strncmp(const char *, const char *, size_t);
int strcmp(const char *, const char *);
char *strchr(const char *, int);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
size_t strcspn(const char *, const char *);

size_t strlen(const char *);
void *memset(void *, int, size_t);

# ifdef __cplusplus
}
# endif /* __cplusplus */


#endif /* !_STRING_H */
