#include <chadlibc/ansi-sysdeps.h>
#include <stdlib.h>

void
exit(int status)
{
	sys_exit(status);
}
