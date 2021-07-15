#include <string.h>

char *
strncpy(char *s1, const char *s2, size_t n)
{
	char *src;
	char *dest;

	src = (char *)s2;
	dest = s1;
	while (n-- && (*dest++ = *src++))
		;

	return (s1);
}
