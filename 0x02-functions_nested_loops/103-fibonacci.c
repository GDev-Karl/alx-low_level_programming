#include <stdio.h>

/**
 * main - where our progam starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = b;

	while (a + b < 4000000)
	{
		b += a;

		if (b % 2 == 0)
			sum += b;

		a = b - a;

		i++;
	}

	printf("%ld\n", sum);
	return (0);
}
