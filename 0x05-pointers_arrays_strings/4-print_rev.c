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
	int i, j;
	char invers[100];
	long unsigned k;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		invers[j] = s[i];
		j++;
	}

	for (k = 0; k <= strlen(invers) - 1; k++)
		_putchar(invers[k]);

	_putchar('\n');
}
