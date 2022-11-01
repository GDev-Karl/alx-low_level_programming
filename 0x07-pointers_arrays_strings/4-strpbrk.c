#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string parameter
 * @accept: other string parameter
 *
 * Return: a pointer on a char
 */

char *_strpbrk(cahr *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	
	return ('\0');
}
