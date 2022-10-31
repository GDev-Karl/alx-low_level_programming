#include "main.h"

/**
 * @dest: destination
 * @src: source
 * @n: byte
 *
 * Return: a pointer to an array of char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
