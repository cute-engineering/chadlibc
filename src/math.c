#include <errno.h>
#include <math.h>
#include <stddef.h>

double
sqrt(double x)
{
	double z = 1;
	size_t i = 0;

	if (x < 0)
	{
		errno = EDOM;
		return 0;
	}

	for (; i < 10; i++)
	{
		z -= (z * z - x) / (2 * z);
	}
	return (z);
}
