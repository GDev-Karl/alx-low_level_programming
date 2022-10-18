#include "main.h"

/**
 * _islower - checks if the character c is lower or upper
 * @c: the parameter of a functio
 *
 * Return: 0 success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
