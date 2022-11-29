#include "lists.h"

/**
 * print_listint - prit elements of a list
 *
 * @h: list to print
 * Return: size of h
 */

size_t print_listint(const listint_t *h)
{
    size_t size = 0;

    while (h)
    {
        printf("%d \n", h->n);
        h = h->next;
        size++;
    }

    return (size);
}
