#include "main.h"

int print_i(va_list args)

{
    int i = va_arg(args, int);
    char str[12] = "%d";
    sprintf(str, "%d", i);
    write(1, &str, sizeof(int));

	return (1);
}