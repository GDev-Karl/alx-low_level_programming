#include "main.h"

/**
 * print_new - print a string
 * @s: parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i, len = 0;

	while (*(str + len))
		len++;

	len = len - 1;

	for (i = 0; i <= len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
