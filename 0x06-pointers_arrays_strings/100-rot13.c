#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string parameter
 *
 * Return: an array of char
 */

char *rot13(char *s)
{
	int i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alp[j] == s[i])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
