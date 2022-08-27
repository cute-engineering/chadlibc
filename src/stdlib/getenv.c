#include <stddef.h>
#include <stdlib.h>
#include <string.h>

extern char **__chadlibc_environ;

char *
getenv(const char *name)
{
	int i;
	for (i = 0; __chadlibc_environ[i] != NULL; i++)
	{
		char *env = __chadlibc_environ[i];
		char *env_name = env;
		while (*env != '=' && *env != '\0')
		{
			env++;
		}
		if (strncmp(env_name, name, env - env_name) == 0)
		{
			return env + 1;
		}
	}
	return NULL;
}
