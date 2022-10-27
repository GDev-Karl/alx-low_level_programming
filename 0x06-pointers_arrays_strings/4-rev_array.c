#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array to reverse
 * @n: size of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;
	int cpy[n];

	for (i = 0; i < n; i++)
		cpy[i] = 0;

	for (i = n - 1; i >= 0; i--)
	{
		cpy[j] = a[i];
		j++;
	}

	for (i = 0; i < n; i++)
		a[i] = cpy[i];
}
