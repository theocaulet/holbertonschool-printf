#include "main.h"

int print_p(va_list args)
{
	char c;

	(void) args;

	c = '%';

	write(1, &c, 1);

	return (1);
}
