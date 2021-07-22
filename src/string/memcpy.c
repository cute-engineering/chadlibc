#include <string.h>

/* TODO: write an optimized version of memcpy */
void *
memcpy(void *s1, const void *s2, size_t n)
{
	char *cs1;
	const char *cs2;

	cs1 = (char *)s1;
	cs2 = (const char *)s2;
	for (; n > 0; n--)
	{
		*cs1++ = *cs2++;
	}
	return (s1);
}
