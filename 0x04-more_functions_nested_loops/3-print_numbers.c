#include <stdio.h>

/**
 * print_numbers - print numbers for 0 to 9
 * 
 * Return: nothing
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
}
