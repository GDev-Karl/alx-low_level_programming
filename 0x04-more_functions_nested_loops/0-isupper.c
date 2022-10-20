#include "main.h"

/**
 * _islower - checks for lower character
 * @c: parameter
 *
 * Return: 1 if upper 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
