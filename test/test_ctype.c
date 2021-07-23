#include <ctype.h>

int main(void)
{
	return (isalpha('A') &&
		(!isalpha('1')) ? 0 : 1);
}
