#include "main.h"

/**
 * print_base_10 - prints an unsigned integer in base 10
 * @args: va_list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_base_10(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	char str[12];
	int len = sprintf(str, "%u", i);

	write(1, &str, len);

	return (len);
}

/**
 * print_base_8 - prints an unsigned integer in base 8 (octal)
 * @args: va_list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_base_8(va_list args)
{
{
	unsigned int nbre = va_arg(args, int);
	char binary[32];
	int binary_index = 0;
	int bit;
	int i;
	char caract;

	if (nbre == 0)
	{
		caract = '0';
		write(1, &caract, 1);
		return (1);
	}
	while (nbre != 0)
	{
		bit = nbre % 8;
		binary[binary_index] = bit;
		binary_index++;
		nbre = nbre / 8;
	}

	for (i = binary_index - 1; i >= 0; i--)
	{
		bit = binary[i];
		caract = bit + '0';
		write(1, &caract, 1);
	}

	return (binary_index);
}
}

/**
 * print_base_16 - prints an unsigned integer in base 16 (hexadecimal)
 * @args: va_list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_base_16(va_list args)

{
	unsigned int nbre = va_arg(args, int);
	char binary[32];
	int binary_index = 0;
	int bit;
	int i;
	char caract;

	if (nbre == 0)
	{
		caract = '0';
		write(1, &caract, 1);
		return (1);
	}
	while (nbre != 0)
	{
		bit = nbre % 16;
		binary[binary_index] = bit;
		binary_index++;
		nbre = nbre / 16;
	}

	for (i = binary_index - 1; i >= 0; i--)
	{
		bit = binary[i];
		if (binary[i] < 10)
		caract = bit + '0';
		else
		caract = bit - 10 + 'a';
		write(1, &caract, 1);
	}

	return (binary_index);
}

/**
 * print_base_16_upper - prints an unsigned integer in base 16 uppercase
 * @args: va_list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_base_16_upper(va_list args)

{
	unsigned int nbre = va_arg(args, int);
	char binary[32];
	int binary_index = 0;
	int bit;
	int i;
	char caract;

	if (nbre == 0)
	{
		caract = '0';
		write(1, &caract, 1);
		return (1);
	}
	while (nbre != 0)
	{
		bit = nbre % 16;
		binary[binary_index] = bit;
		binary_index++;
		nbre = nbre / 16;
	}

	for (i = binary_index - 1; i >= 0; i--)
	{
		bit = binary[i];
		if (binary[i] < 10)
		caract = bit + '0';
		else
		caract = bit - 10 + 'A';
		write(1, &caract, 1);
	}

	return (binary_index);
}
