#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head of the list
 * @index: index of the node
 * 
 * Return: listint_t* 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *node = head;

    while(head)
    {
        if(i == index)
            *node = head;
        i++;
        head = head->next;
    }

    return (node);
}
