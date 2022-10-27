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
	int i = 0, t;

	n = n - 1;

	while (i < n)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
		n--;
	}
}
