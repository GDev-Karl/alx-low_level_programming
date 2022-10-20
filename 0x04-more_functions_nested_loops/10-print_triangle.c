#include "main.h"

/**
 * pint_triangle
 * @size: siez of triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y <= (size - 1); y++)
		{
			for (x = 0; x < ((size - 1) - y), x++)
				_putchar(' ');

			for (z = 0; z <= y; z++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
