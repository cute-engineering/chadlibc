#include <string.h>

int
main(void)
{
	int result;

	result = strncmp("hello", "hello", 2) == 0 ? 0 : 1;
	result += strncmp("hello", "world", 4) != 0 ? 0 : 1;
	result += strncmp("helloworld", "he", 2) == 0 ? 0 : 1;
	result += strncmp("helloworld", "he", 5) != 0 ? 0 : 1;

	return (result);
}
