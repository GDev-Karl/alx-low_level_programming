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
	int  i = 0;

	while (s[i] != '\0')
	{
		if (s[i] ==  c)
			return (s + i);
		i++;
	}

	return '\0';
}
