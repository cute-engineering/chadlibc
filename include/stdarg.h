#ifndef _STDARG_H
# define _STDARG_H 1

# define va_list __builtin_va_list
# define va_start(v, f) __builtin_va_start(v, f)
# define va_end(v) __builtin_va_end(v)
# define va_arg(v, a) __builtin_va_arg(v, a)

#endif /* !_STDARG_H */
