#include <stddef.h>
#include <stdlib.h>

char **__chadlibc_environ = NULL;
void (*__chadlibc_atexit[ATEXIT_MAX])(void);

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
	int argc = 0, i = 0;
	char **argv = NULL;
	char **envp = NULL;

	for (i = 0; i < ATEXIT_MAX; i++)
	{
		__chadlibc_atexit[i] = NULL;
	}

	parse_stack((unsigned long *)stack, &argc, &argv, &envp);
	exit(main(argc, argv, envp));
}
