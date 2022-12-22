#include "string.h"
#include <stddef.h>

size_t
strcspn(const char *s1, const char *s2)
{
    size_t j;
    size_t i;

    for (i = 0; i < strlen(s1); i++)
    {
        for (j = 0; j < strlen(s2); j++)
        {
            if (s2[j] == s1[i])
            {
                return (i);
            }
        }
    }

    return (i);
}
