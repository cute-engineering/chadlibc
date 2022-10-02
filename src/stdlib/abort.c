#include <chadlibc/ansi-sysdeps.h>
#include <signal.h>
#include <stdlib.h>

void
abort(void)
{
	raise(SIGABRT);
	__builtin_trap();
}
