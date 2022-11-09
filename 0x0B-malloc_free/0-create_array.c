#include "main.h"

/**
 * crete_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: character
 *
 * Return: an aray of chars
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc (sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
