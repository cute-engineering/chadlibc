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
#ifndef _CHADLIBC_ANSI_SYSDEPS_H
# define _CHADLIBC_ANSI_SYSDEPS_H 1
# include <stddef.h>

/* stdlib sysdeps ---------------------------------------------------------- */

void sys_exit(int status);
void *sys_allocate(size_t size);
int sys_free(void *ptr, size_t size);

/* stdio sysdeps ---------------------------------------------------------- */
typedef void FILE;

FILE *sys_fopen(const char *path, const char *mode);
int sys_fclose(FILE *file);
int sys_remove(const char *filename);
int sys_rename(const char *oldname, const char *newname);
int sys_fseek(FILE *file, long int offset, int whence);
size_t sys_fread(void *ptr, size_t size, size_t nmemb, FILE *file);
size_t sys_fwrite(const void *ptr, size_t size, size_t nmemb, FILE *file);

#endif /* !_CHADLIBC_ANSI_SYSDEPS_H */
