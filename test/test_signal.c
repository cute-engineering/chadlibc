#include <signal.h>
#include <stdlib.h>

void
sig_handler(int a)
{
	(void)a;
	exit(0);
}

int
main()
{
	signal(SIGABRT, sig_handler);
	raise(SIGABRT);
	return 1;
}
