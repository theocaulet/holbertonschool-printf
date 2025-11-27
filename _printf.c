#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing characters and format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int format_index = 0, count = 0, printer_index = 0, found = 0;

	va_list args;

	checker printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_decimal},
		{0, NULL}};

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format != NULL && format[format_index] != '\0')
	{
		if (format[format_index] != '%')
		{
			write(1, &format[format_index], 1);
			count++;
			format_index++;
		}
		else
		{
			if (format[format_index] == '%' && format[format_index + 1] == '\0')
				return (-1);
			found = 0;
			for (printer_index = 0; printer_index < 5; printer_index++)
			{
				if (format[format_index + 1] == printers[printer_index].type)
				{
					count += printers[printer_index].function(args);
					format_index += 2;
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				write(1, &format[format_index], 1);
				write(1, &format[format_index + 1], 1);
				count += 2;
				format_index += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
