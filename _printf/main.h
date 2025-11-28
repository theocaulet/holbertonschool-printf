#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/**
 * struct checker - Structure for format specifiers
 * @type: The format specifier character
 * @function: Pointer to the function that handles the format
 */

typedef struct checker
{
	char type;
	int (*function)(va_list);
} checker;

extern checker printers[];

#endif
