#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing characters and format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				count += print_char(args);
				i += 2;
			}
			if (format[i + 1] == 's')
			{
				count += print_string(args);
				i += 2;
			}
			if (format[i + 1] == '%')
			{
				count += print_char(args);
				i += 2;
			}
			else
			{

				write(1, &format[i], 1);
				count++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	return (count);
}
