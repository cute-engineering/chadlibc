#include <string.h>

int
main(void)
{
	int result;

	result = strcmp("hello", "hello") == 0 ? 0 : 1;
	result += strcmp("hello", "world") != 0 ? 0 : 1;
	result += strcmp("helloworld", "hi") != 0 ? 0 : 1;

	return (result);
}
