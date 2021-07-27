#include <string.h>

char *
strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t i;

	len = strlen(s1);
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		s1[len + i] = s2[i];
	}
	return (s1);
}
