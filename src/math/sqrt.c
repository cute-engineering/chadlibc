#include <errno.h>

double
sqrt(double x)
{
	double z;
	int i;

	if (x < 0)
	{
		errno = EDOM;
		return 0;
	}

	z = 1;
	for (i = 0; i < 10; i++)
	{
		z -= (z * z - x) / (2 * z);
	}
	return (z);
}
