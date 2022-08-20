#include <string.h>

int 
main(void)
{
    int result;

    char *str1 = "Hello,World!";
    char *str2 = "I love DEVSE";
    char *str3 = "1;2;3";

    result = strcmp(strchr(str1, ','), ",World!") == 0 ? 0 : 1;
    result += strcmp(strchr(str2, ' '), " love DEVSE") == 0 ? 0 : 1;
    result += strcmp(strchr(str3, ';'), ";2;3") == 0 ? 0 : 1;

    return (result);
}

