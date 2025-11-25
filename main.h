#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);

/**
 * struct formats - Structure for format specifiers
 * @type: The format specifier character
 * @function: Pointer to the function that handles the format
 */

typedef struct formats
{
	char type;
	int (*function)(va_list);
} checker;

int print_char(va_list ap);
int print_string(va_list ap);
int print_p(va_list ap);



#endif
