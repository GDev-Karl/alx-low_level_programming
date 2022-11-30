#include "lists.h"

/**
 * insert_node_at_index - insert node at index
 * @head: head of the list
 * @idx: index
 * @pn: number to insert
 * 
 * Return: listint_t* 
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *tmp ;
    listint_t *list;

    tmp = *head;

    if(idx != 0)
    {
        for(i = 0; i < idx &&  tmp != NULL; i++)
        {
            tmp = tmp->next; 
        }
    }

    if(tmp == NULL && idx != 0)
        return (NULL);
        
    list = malloc(sizeof(listint_t));

    if(!list)
        return (NULL);

    list->n = n;

    if (idx == 0)
    {
        
        list->next = *head;
        *head = list;
        
    }
    else
    {
        list->next = tmp;
        tmp->next = list;
    }

    return (list);
}
