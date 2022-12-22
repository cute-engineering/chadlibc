#include <string.h>

void *
memset(void *s, int c, size_t n)
{
	unsigned char *cs;

	cs = (unsigned char *)s;
	while (n--)
	{
		*cs++ = (unsigned char)c;
	}
	return (s);
}
