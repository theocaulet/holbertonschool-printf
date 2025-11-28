#include "main.h"

/**
 * print_decimal - prints a decimal integer
 * @args: va_list containing the integer to print
 *
 * Return: number of characters printed
 */

int print_decimal(va_list args)

{
int d = va_arg(args, int);
char str[12];
int len = sprintf(str, "%d", d);
write(1, &str, len);

return (len);
}
