#include <string.h>

char *
strcat(char *s1, const char *s2)
{
	return (strncat(s1, s2, strlen(s2)));
}
