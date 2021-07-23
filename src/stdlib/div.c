#include <stdlib.h>

div_t
div(int number, int denom)
{
	div_t res;

	res.quot = number / denom;
	res.rem = number % denom;

	return (res);
}
