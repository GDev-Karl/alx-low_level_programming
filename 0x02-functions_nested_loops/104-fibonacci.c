#include <stdio.h>

/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 0;
	long int a = 1, b = 2;

	while (i < 88)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}

		i++;
	}

	printf("\n");

	return (0);
}
