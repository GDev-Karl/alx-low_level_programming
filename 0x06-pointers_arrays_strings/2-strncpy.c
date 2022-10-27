#include "main.h"

/**
 * _strbcpy - copy a string to another at most n byte
 * @dest: destination string
 * @src: source string
 * @n: numbe of byte
 *
 * Return: an arrays of char
 */

char *_strncpy(cahr char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
