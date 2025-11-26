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
	int j_printers = 0;
	int found = 0;

	va_list args;

	checker printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_p},
		{'i', print_i},
		{'d', print_d},
		{0, NULL}};

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
		else
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			found = 0;
			for (j_printers = 0; j_printers < 5; j_printers++)
			{
				if (format[i + 1] == printers[j_printers].type)
				{
					count += printers[j_printers].function(args);
					i += 2;
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				write(1, &format[i], 1);
				write(1, &format[i + 1], 1);
				count += 2;
				i += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
