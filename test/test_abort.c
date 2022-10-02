#include <signal.h>
#include <stdlib.h>

void
func(int sig)
{
	(void)sig;
	exit(0);
}

int
main(void)
{
	signal(SIGABRT, func);
	abort();
	return -1;
}
