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
			for (found = 0, printer_index = 0; printer_index < 10 ; printer_index++)
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

