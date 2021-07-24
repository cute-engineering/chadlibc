#include <string.h>

int
strncmp(const char *s1, const char *s2, size_t n)
{
	return (memcmp(s1, s2, n));
}
