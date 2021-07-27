#include <string.h>

int
main(void)
{
	int result;
	char buffer[50] = { '\0' };

	strcpy(buffer, "hello world");
	result = strcmp(buffer, "hello world") == 0 ? 0 : 1;

	return (result);
}
