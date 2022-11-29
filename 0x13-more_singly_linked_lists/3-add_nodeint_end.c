#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: head of a list
 * @n: number to add
 * 
 * Return: listint_t* 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tmp;
    listint_t *temp = *head;

    tmp = malloc(sizeof(listint_t));
    if (tmp == NULL)
        return (NULL);

    tmp->n = n;
    tmp->next = NULL;


    *head = tmp;
    return (tmp);
    
    if (*head == NULL)
    {
        *head = tmp;
        return (tmp);
    }

    while (temp->next)
        temp = temp->next;
    
    temp->next = tmp;

    return (tmp);
    
}
