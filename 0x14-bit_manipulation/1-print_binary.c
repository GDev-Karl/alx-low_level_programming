#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	int i, bits, leading_zeroes;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bits = sizeof(unsigned long int) * 8;
	leading_zeroes = 1;

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			leading_zeroes = 0;
			_putchar('1');
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}
	}
}
