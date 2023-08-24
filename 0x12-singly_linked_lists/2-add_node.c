#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the head of the list
 * @str: the string of the node to add
 *
 * Return: the head of the new list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(node->str);
	node->next = *head;
	*head = node;

	return (*head);
}
