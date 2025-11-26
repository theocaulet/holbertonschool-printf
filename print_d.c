#include "main.h"

int print_d(va_list args)

{
    int d = va_arg(args, int);
    char str[12];
    int len = sprintf(str, "%d", d);
    
    write(1, str, len);

	return (len);
}