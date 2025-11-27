#include "main.h"

/**
 * u_int_to_binary - converts an unsigned integer to binary representation
 * @args: va_list containing the unsigned integer argument
 *
 * Return: number of bits printed
 */
int u_int_to_binary(va_list args)
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
		bit = nbre % 2;
		binary[binary_index] = bit;
		binary_index++;
		nbre = nbre / 2;
	}

	for (i = binary_index - 1; i >= 0; i--)
	{
		bit = binary[i];
		caract = bit + '0';
		write(1, &caract, 1);
	}

	return (binary_index);
}
