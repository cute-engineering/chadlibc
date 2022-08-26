#ifndef _CHADLIBC_ANSI_SYSDEPS_H
#define _CHADLIBC_ANSI_SYSDEPS_H 1
#include <stddef.h>

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
