#include <string.h>

int
main(void)
{
	int result;
	char buffer[50] = { '\0' };

	strcat(buffer, "hello");
	result = strcmp(buffer, "hello") == 0 ? 0 : 1;

	strcat(buffer, "world");
	result += strcmp(buffer, "helloworld") == 0 ? 0 : 1;

	return (result);
}
