#include "main.h"

/**
 * print_char - prints a character from va_list
 * @args: variable argument list containing the character to print
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}
