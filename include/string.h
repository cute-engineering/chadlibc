#ifndef _STRING_H
# define _STRING_H 1

#include <stddef.h>

void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
char *strcpy(char *, const char *);
char *strncpy(char *, const char *, size_t);

int memcmp(const void *, const void *, size_t);
int strncmp(const char *, const char *, size_t);
int strcmp(const char *, const char *);

size_t strlen(const char *);
void *memset(void *, int, size_t);

#endif /* !_STRING_H */
