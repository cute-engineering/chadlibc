#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
	int result = 0;
	result += getenv("hello") == NULL ? 0 : 1;
	result += getenv("world") == NULL ? 0 : 1;
	result += getenv("hello world") == NULL ? 0 : 1;
	result += strcmp(getenv("TEST_ENV"), "some_value") == 0 ? 0 : 1;
	return (result);
}
