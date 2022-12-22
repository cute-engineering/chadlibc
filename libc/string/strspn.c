#include <stddef.h>
#include <string.h>

size_t 
strspn(const char *s1, const char *s2)
{
    long i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }

    return (i);
}

