#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a linked list
 * @head: list to sum
 */
int sum_dlistint(dlistint_t *head)
{
    list *temp = head;
    int sum = 0;

    while (temp)
    {
        sum += temp->n;
        temp = temp->next;
    }
    
    return (sum);
}