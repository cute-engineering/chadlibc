#include <stddef.h>
#include <stdlib.h>

int
main()
{
	int result = 0;

	double d = strtod("1.0", NULL);

	result += (d == 1.0) ? 0 : 1;
	result += (strtod("-2", NULL) == -2) ? 0 : 1;
	result += (strtod("-2.0", NULL) == -2.0) ? 0 : 1;

	return result;
}
