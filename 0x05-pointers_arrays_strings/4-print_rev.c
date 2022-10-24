#include "main.h"

/**
 * print_rev - print a reverse of a string 
 * @s: parameter string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	i = i - 1;

	while(i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
