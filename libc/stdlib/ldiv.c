#include <stdlib.h>

ldiv_t
ldiv(long int number, long int denom)
{
	ldiv_t res;

	res.quot = number / denom;
	res.rem = number % denom;

	return (res);
}
