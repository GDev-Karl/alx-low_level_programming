#include "lists.h"

/**
 * listint_len - return  the len of a list
 *
 * @h: list to calculate len
 * Return: size of h
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
