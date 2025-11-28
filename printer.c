#include "main.h"

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);
int u_int_to_binary(va_list args);
int print_base_10(va_list args);
int print_base_8(va_list args);
int print_base_16(va_list args);
int print_base_16_upper(va_list args);

checker printers[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'i', print_int},
	{'d', print_decimal},
	{'b', u_int_to_binary},
	{'u', print_base_10},
	{'o', print_base_8},
	{'x', print_base_16},
	{'X', print_base_16_upper},
	{0, NULL}};



