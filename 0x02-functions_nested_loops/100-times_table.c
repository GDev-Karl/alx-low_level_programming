#include "main.h"

/**
 * print_times_table - print the number of times of n in table
 * @n: parameter
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int x, y, p;
	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				p = x * y;
				if (p > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
