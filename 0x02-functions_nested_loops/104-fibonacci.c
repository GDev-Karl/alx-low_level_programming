#include <stdio.h>

/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 1, b = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu", a);
		else if (i == 1)
			printf(", %lu", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %lu", b);
		}

		i++;
	}

	printf("\n");

	return (0);
}
