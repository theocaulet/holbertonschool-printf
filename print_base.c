#include "main.h"

/**
 * print_base_10 - prints an unsigned integer in base 10
 * @args: va_list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_base_10(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	char str[12];
	int len = sprintf(str, "%u", i);

	write(1, &str, len);

	return (len);
}
