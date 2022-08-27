#include <sys/syscall.h>

static void
syscall1(int nbr, unsigned long arg)
{
	__asm__ volatile("syscall" : : "a"(nbr), "D"(arg));
}

void
sys_exit(int status)
{
	syscall1(SYS_exit, status);
}
