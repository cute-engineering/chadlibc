#include "limits.h"
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
	int res = 0;

	res = strtoul("0", NULL, 10) == 0 ? 0 : 1;
	res = strtoul("0xFFFF", NULL, 16) == 0xFFFF ? 0 : 1;
	res = strtoul("0xffff", NULL, 16) == 0xFFFF ? 0 : 1;
	res = strtoul("0xFFFFFFFF", NULL, 16) == 0xFFFFFFFF ? 0 : 1;
	res = (int)strtoul("-10", NULL, 10) == -10 ? 0 : 1;
	res = (int)strtoul("-0xFF", NULL, 16) == -0xFF ? 0 : 1;

	/* Test overflow */
	res = (strtoul("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", NULL, 16) == ULONG_MAX &&
		   errno == ERANGE)
			  ? 0
			  : 1;

	return res;
}
