#ifndef _STDDEF_H
# define _STDDEF_H 1

# define NULL ((void *)0)

#ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ size_t;
#else
typedef unsigned long size_t;
#endif


#endif /* !_STDDEF_H */
