#include <string.h>

void
memset(void *s, int c, size_t n)
{
  char *cs = (char *)s;
  unsigned char cc = (unsigned char)c;
  size_t i = 0;
  for (; i < n; i++)
  {
    cs[i] = cc;
  }
}
