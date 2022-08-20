#include <string.h>

int main(void)
{
    int result = 0;

    result += strcspn("hello world", "hello") == 0 ? 0 : 1;
    result += strcspn("hello world", "world") == 2 ? 0 : 1;
    result += strcspn("hello world", "hello world") == 0 ? 0 : 1;
    result += strcspn("hello world", "z") == 11 ? 0 : 1;
    result += strcspn("hello world", "zygote") == 1 ? 0 : 1;

    return (result);
}
