#include <string.h>

int
memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i = 0;
  const char *cs1, *cs2;
  cs1 = (const char *)s1;
  cs2 = (const char *)s2;
  for (; i < n; i++)
  {
    char first = cs1[i];
    char second = cs2[i];
    if (first < second || first > second)
    {
      return (first - second); 
    }
  }
  return (0);
}
int
strncmp(const char *s1, const char *s2, size_t n)
{
  return (memcmp(s1, s2, n));
}
int
strcmp(const char *s1, const char *s2)
{
  size_t len = strlen(s1);
  if (len > strlen(s2))
  {
    len = strlen(s2);
  }
  return (strncmp(s1, s2, len));
}
