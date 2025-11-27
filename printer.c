#include "main.h"

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);
int u_int_to_binary(va_list args);

checker printers[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'i', print_int},
	{'d', print_decimal},
	{'b', u_int_to_binary},
	{0, NULL}};

