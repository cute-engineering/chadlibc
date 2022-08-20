#include <string.h>

int main(void)
{
    int result = 0;

    result += strspn("hello world", "hello") == 5 ? 0 : 1;
    result += strspn("hello world", "world") == 0 ? 0 : 1;
    result += strspn("hello world", "hello world") == 11 ? 0 : 1;

    return (result);
}
