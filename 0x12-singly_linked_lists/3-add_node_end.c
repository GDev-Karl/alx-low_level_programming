#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list
 * @head: the head of the list
 * @str: the string of the node to add
 * Return: the head of the new list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp_head;
	size_t len = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[len])
	{
		len++;
	}

	node->len = len;
	node->next = NULL;
	temp_head = *head;

	if (temp_head == NULL)
		*head = node;
	else
	{
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		temp_head->next = node;
	}

	return (*head);
}
