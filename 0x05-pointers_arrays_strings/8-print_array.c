#include "main.h"

/**
 * print_array - print an array
 * @a: fisrt parameter
 * @n: second parameter
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
		i++;
	}

	printf("\n");
}
