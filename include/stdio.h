#ifndef _STDIO_H
# define _STDIO_H 1

# include <stdarg.h>
# include <stddef.h>

int vsprintf(char *str, const char *format, va_list ap);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);

#endif /* !_STDIO_H */
