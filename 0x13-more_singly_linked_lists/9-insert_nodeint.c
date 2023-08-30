#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head of the list
 * @idx: index
 * @n: number to insert
 * Return: the entire list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *list;
	listint_t *tmp;

	tmp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;

	if (idx == 0)
	{
		list->next = *head;
		*head = list;
	}
	else
	{
		list->next = tmp->next;
		tmp->next = list;
	}

	return (list);
}
