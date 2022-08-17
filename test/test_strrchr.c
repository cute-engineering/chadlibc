#include <string.h>

int 
main(void)
{
    int result;

    char *str1 = "Hello,World!";
    char *str2 = "I love DEVSE";
    char *str3 = "1;2;3";

    result = strcmp(strrchr(str1, ','), ",World!") == 0 ? 0 : 1;
    result += strcmp(strrchr(str2, ' '), " DEVSE") == 0 ? 0 : 1;
    result += strcmp(strrchr(str3, ';'), ";3") == 0 ? 0 : 1;

    return (result);
}
