#include "main.h"

/**
 * print_rev - print a reverse of a string 
 * @s: parameter string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;
	char invers[100];

	for (i = _strlen(s) - 1; i >= 0; i++)
	{
		invers[j] = s[i];
		j++;
	}

	for (i = 0; i <= _strlen(invers) - 1; i++)
		_putchar(invers[i]);

	_putchar('\n');
}
