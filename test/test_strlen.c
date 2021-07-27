#include <string.h>

int
main(void)
{
	int result;

	result = strlen("") == 0 ? 0 : 1;
	result += strlen("1") == 1 ? 0 : 1;
	result += strlen("12") == 2 ? 0 : 1;
	result += strlen("123") == 3 ? 0 : 1;

	return (result);
}
