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
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++
	}

	return (s);
}
