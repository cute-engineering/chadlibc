#include <stddef.h>
#include <stdlib.h>

char **__chadlibc_environ = NULL;

extern int main(int argc, char *argv[], char *envp[]);

static void
parse_stack(unsigned long *stack, int *argc, char ***argv, char ***envp)
{
	unsigned long *sp = stack;
	*argc = *sp++;
	*argv = (char **)(sp);
	sp += *argc;
	sp++;
	*envp = (char **)(sp);
	__chadlibc_environ = *envp;
}

void
__chadlibc_entry(char *stack)
{
	int argc = 0;
	char **argv = NULL;
	char **envp = NULL;
	parse_stack((unsigned long *)stack, &argc, &argv, &envp);
	exit(main(argc, argv, envp));
}
