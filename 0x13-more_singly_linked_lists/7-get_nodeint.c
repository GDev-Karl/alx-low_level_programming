#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head of the list
 * @index: index of the node
 * 
 * Return: listint_t* 
 */

istint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *tmp = head;

    while (tmp && i < index)
    {
        tmp = tmp->next;
        i++;
    }

    return (tmp ? tmp : NULL);
}
