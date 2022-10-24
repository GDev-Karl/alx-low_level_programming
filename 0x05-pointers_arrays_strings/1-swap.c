#include "main.h"

/**
 * swap_int - swap the value of two int
 * @a: first parameter
 * @b: second parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
