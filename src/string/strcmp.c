#include <string.h>
	
int
strcmp(const char *s1, const char *s2)
{
 	size_t i = 0;
 	for (; s1[i] != 0 && s2[i] != 0; i++)
 	{
		char first = s1[i];
    	char second = s2[i];
    	if (first != second)
    	{
    		return (first - second);
    	}
  	}
  	return 0;
}
