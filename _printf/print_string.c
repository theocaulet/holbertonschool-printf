#include "main.h"

/**
 * print_string - prints a string from va_list
 * @args: variable argument list containing the string to print
 *
 * Return: length of the printed string
 */
int print_string(va_list args)
{
	int len;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	len = strlen(str);
	write(1, str, len);
	return (len);
}
