#include "main.h"

/**
 * print_alphabet - print the alphabet follows by a new line
 *
 * Return: 0 success
 */

void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
