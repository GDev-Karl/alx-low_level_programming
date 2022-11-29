#include "lists.h"

/**
 * sum_listint - sum of the data of a list
 * @head: head of the list
 * 
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *tmp = head;

    while(tmp)
    {
        sum += tmp->n;
        tmp = tmp->next;
    }

    return (sum)
}
