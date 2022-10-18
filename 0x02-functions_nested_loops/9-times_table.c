#include "main.h"

/**
 * times_tables - print the times tables
 *
 * Return: nothing
 */

void times_table(void)
{
	int l, c, p, m, d;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = l * c;

			if (p > 9)
			{
				m = p % 10;
				d = (p -m) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(m + '0');
			}
			else
			{
				if (c != 0 )
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
