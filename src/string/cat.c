#include <string.h>

char *
strncat(char *s1, const char *s2, size_t n)
{
  size_t len1 = strlen (s1);
  size_t len2 = strlen (s2);
  size_t i = 0;
  for (; i < len2 && i < n; i++)
  {
    s1[len1 + i] = s2[i];
  }
  return (s1);
}
char *
strcat(char *s1, const char *s2)
{
  return (strncat(s1, s2, strlen(s2)));
}
