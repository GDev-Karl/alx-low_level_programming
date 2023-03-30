#include "main.h"

/**
 * _strncpy - copy a string to another at most n byte
 * @dest: destination string
 * @src: source string
 * @n: numbe of byte
 *
 * Return: an arrays of char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}