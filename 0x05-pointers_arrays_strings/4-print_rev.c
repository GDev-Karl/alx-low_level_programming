#include "main.h"
#include <string.h>

/**
 * print_rev - print a reverse of a string 
 * @s: parameter string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	unsigned int i, j;
	char invers[100];

	for (i = strlen(s) - 1; i >= 0; i++)
	{
		invers[j] = s[i];
		j++;
	}

	for (i = 0; i <= strlen(invers) - 1; i++)
		_putchar(invers[i]);

	_putchar('\n');
}
