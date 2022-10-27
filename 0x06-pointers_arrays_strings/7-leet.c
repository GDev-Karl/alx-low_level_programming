#include "main.h"

/**
 * leet - convert some letters to a number
 * @n: string parameter
 *
 * Return: an array of char
 */

char *leet(char *n)
{
	int i, x;
	int letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int number[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == letter[x])
			{
				n[i] = number[x / 2];
				break;
			}
		}
	}

	return (n);
}
