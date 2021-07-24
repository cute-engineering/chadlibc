#include <string.h>
	
int
strcmp(const char *s1, const char *s2)
{
 	size_t i = 0;
 	for (; s1[i] != 0 && s2[i] != 0; i++)
 	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
