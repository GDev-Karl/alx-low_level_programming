#include <stdio.h>

/**
 * main - whee our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
