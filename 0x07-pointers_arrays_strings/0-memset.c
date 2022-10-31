#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string parameter
 * @b: character parameter
 * @n: constant byte
 *
 * Return: a pointer to a  string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
