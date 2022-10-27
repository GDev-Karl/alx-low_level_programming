#include "main.h"

/**
 * _strncat - concat string using at most n byte
 * @dest: first string
 * @src: second string
 * @n: number of byte
 *
 * Return: an arrays of char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0, j = 0;

	while (*(dest + len))
		len++;

	for (i = 0; j < n && *(src + i); i++)
	{
		dest[len] = src[i];
		len++;
		j++;
	}

	if (j < n)
		dest[len] = src[i];

	return (dest);
}
