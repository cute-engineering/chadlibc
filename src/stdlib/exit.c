#include <chadlibc/ansi-sysdeps.h>
#include <stdlib.h>

extern void (*__chadlibc_atexit[])(void);

void
exit(int status)
{
	int i;
	for (i = 0; i < ATEXIT_MAX; i++)
	{
		if (__chadlibc_atexit[i] != NULL)
			__chadlibc_atexit[i]();
	}

	sys_exit(status);
}
