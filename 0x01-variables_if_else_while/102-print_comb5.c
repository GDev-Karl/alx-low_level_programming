#include <stdio.h>

/**
 * main - where our progam starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i, j;

	for (i =0; i <= 98; i++)
	{
		for (j = i + i; j <= 98; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');

			putchar((j / 10) + 10);
			putchar((j % 10) + 10);

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}

