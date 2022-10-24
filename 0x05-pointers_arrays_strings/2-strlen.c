#include "main.h"

/**
 * _strlen - len of a string
 * @s: parameter
 *
 * Return: the len of *s
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
