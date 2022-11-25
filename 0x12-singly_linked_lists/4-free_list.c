#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: nothing
 */

void free_list(list_t *head)
{
    list_t *tmp = head;

    while (tmp != NULL)
    {
        head = head->next;
        free(tmp->str);
        free(tmp);
        tmp = head;
    }
}
