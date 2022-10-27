#include "main.h"

/**
 * _strcmp - compae two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: an interger
 */

int _strcmp(char *s1, char *s2)
{
	int i, v;
	i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			v = s1[i] - s2[i];
			break;
		}
		else
			v = s1[i] - s2[i];
		i++;
	}

	return (v);
}
