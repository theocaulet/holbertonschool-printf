#include "main.h"

int print_d(va_list args)

{
    long int d = va_arg(args, int);
    char str[12] = "%d";
    sprintf(str, "%d", d);
    write(1, &str, sizeof(long int));

	return (d);
}