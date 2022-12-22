#include <stddef.h>
#include <stdlib.h>

static int atexit_count = 0;

extern void (*__chadlibc_atexit[])(void);

int
__cxa_atexit(void (*func)(void *), void *arg, void *dso)
{
	(void)arg;
	(void)dso;

	if (arg || dso)
		return -1;

	if (atexit_count >= ATEXIT_MAX)
		return -1;

	/* this is cursed and not portable */
	__chadlibc_atexit[atexit_count] = (void (*)(void))func;
	__atomic_fetch_add(&atexit_count, 1, __ATOMIC_SEQ_CST);

	return 0;
}

int
atexit(void (*func)(void))
{
	return __cxa_atexit((void (*)(void *))func, NULL, NULL);
}
