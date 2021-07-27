#include <string.h>

int
memcmp(const void *s1, const void *s2, size_t n)
{
	const char *cs1;
	const char *cs2;

	cs1 = (const char *)s1;
	cs2 = (const char *)s2;
	while (n--)
	{
		if (*cs1 != *cs2)
		{
			return (*cs1 - *cs2);
		}
		cs1++;
		cs2++;
	}
	return (0);
}
