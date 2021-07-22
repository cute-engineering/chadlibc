#ifndef _STRING_H
# define _STRING_H 1

#include <stddef.h>

void *memcpy(void *, const void *, size_t);
char *strcpy(char *, const char *);
char *strncpy(char *, const char *, size_t);

#endif /* !_STRING_H */