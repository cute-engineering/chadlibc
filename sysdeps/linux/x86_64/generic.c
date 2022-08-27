#include <sys/syscall.h>
#include <unistd.h>

void
sys_exit(int status)
{
	syscall(SYS_exit, status);
}
