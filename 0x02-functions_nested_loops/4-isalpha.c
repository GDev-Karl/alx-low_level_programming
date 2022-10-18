#include "main.h"

/**
 * _isalpha - checks if a letter or not
 * @c: is a parameter
 *
 * Return: 0 success
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
