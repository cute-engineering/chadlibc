#include <string.h>

int
main(void)
{
	int result;
	char buffer[50] = { '\0' };

	strncat(buffer, "hello world", 5);
	result = strcmp(buffer, "hello") == 0 ? 0 : 1;

	return (result);
}
