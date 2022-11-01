#include "main.h"

/**
 * _strchr - checks a character in a string
 * @s: string 
 * @c: character
 *
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int  i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);

	return '\0';
}
