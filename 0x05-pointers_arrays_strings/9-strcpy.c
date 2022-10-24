#include "main.h"

/**
 * _strcpy - copya string in another string
 * @dest: string destination
 * @src: string source
 *
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;

	return (dest);
}
