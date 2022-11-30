#include "lists.h"

/**
 * reverse_listint - reverses a list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l;
	listint_t *m;

	l = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = l;
		l = *head;
		*head = m ;
	}

	*head = l;
	return (*head);
}
