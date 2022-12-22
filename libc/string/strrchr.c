#include <stddef.h>

char *
strrchr(const char *s, int c)
{
    char *last = NULL;

    while (*s)
    {
        if (*s == c)
        {
            last = (char *)s;
        }
        s++;
    }

    return (last);
}
