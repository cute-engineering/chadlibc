#include <stdlib.h>

div_t
div(int numer, int denom)
{
	div_t res;

	res.quot = number / denom;
	res.rem = number % denom;

	return (res);
}
