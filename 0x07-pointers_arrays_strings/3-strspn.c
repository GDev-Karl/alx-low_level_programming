#include"main.h"

/**
 * _strspn - substring
 * @s: string
 * @accept: second string
 *
 * Return: an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;
	}

	return (i);
}
