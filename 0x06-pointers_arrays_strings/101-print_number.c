#include "main.h"

/**
 * print_number - display a number on the screen
 * @n: number to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -nb;
	}

	if ((nb / 10) > 0)
		print_number(nb / 10);

	_putchar((nb % 10) + '0');
}
