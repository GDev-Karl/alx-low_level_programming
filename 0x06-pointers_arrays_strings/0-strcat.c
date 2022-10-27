#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string to concatenate
 * @src: second string to concatnate
 *
 * Return: an arrays of char
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (*(dest + len))
		len++;

	for (i = 0; *(src + i); i++)
	{
		dest[len] = src[i];
		len++;
	}
	
	dest[len] = '\0';
	
	return (dest);
}
