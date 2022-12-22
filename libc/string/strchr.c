#include <stddef.h>

char *
strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
    }

    return (NULL);
}
