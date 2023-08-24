#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *node = head;

	while (node != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
