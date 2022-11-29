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

    while(head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum)
}
