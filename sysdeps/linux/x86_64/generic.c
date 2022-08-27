#include <sys/syscall.h>
#include <unistd.h>

#define syscall1(id, param)                                                    \
 ({                                                                            \
long __res;                                                                     \
__asm__ volatile("syscall" : "=a"(__res) : "a"(id), "D"(param));                \
__res;                                                                          \
 })

void
sys_exit(int status)
{
	syscall(SYS_exit, status);
}
