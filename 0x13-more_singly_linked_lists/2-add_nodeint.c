#include "lists.h"

/**
 * add_nodeint - add node to the begin of a list
 *
 * @head: our list
 * @n: element to add
 * Return: a pointer to a list or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
