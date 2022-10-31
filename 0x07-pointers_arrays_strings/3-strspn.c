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
	unsigned int i = 0, j, bol;

	while (s[i] != '\0')
	{
		bol = 1;

		for (j = 0; accept[j] !='\0'; j++)
		{
			if (s[i] == accept[i])
			{
				bol = 0;
				break;
			}
		}

		if (bol == 1)
			break;
		i++;
	}
	return (i);
}
