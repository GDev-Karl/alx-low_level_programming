#include "main.h"

/**
 * puts_half - prit a half of a string
 * @str: parameter
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	i = len / 2;

	if (len % 2)
		i += 1;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
