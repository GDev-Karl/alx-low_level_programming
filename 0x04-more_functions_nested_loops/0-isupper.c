#include "main.h"

/**
 * _islower - checks for lower character
 * @c: parameter
 *
 * Return: 1 if upper 0 else
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
