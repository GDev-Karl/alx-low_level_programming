#include <stdio.h>

/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		putchar(nbr + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
