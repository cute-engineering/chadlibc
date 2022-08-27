#include <stddef.h>
#include <stdlib.h>

static int atexit_count = 0;

extern void (*__chadlibc_atexit[])(void);

void
__cxa_atexit(void (*func)(void *), void *arg, void *dso)
{
	(void)arg;
	(void)dso;

	/* this is cursed and not portable */
	__chadlibc_atexit[atexit_count] = (void (*)(void))func;
	__atomic_fetch_add(&atexit_count, 1, __ATOMIC_SEQ_CST);
}

void
atexit(void (*func)(void))
{
	__cxa_atexit((void (*)(void *))func, NULL, NULL);
}
