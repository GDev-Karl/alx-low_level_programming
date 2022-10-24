#include "main.h"

/**
 * rev_string - reverse strings
 * @s: parameter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char rev = s[0];
	int size = 0;
	int i;

	while (s[size] != '\0')
		size++;

	for (i = 0; i < size; i++)
	{
		size--;
		rev = s[i];
		s[i] = s[size];
		s[size] = rev;
	}
}
