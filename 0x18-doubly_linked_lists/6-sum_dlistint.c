#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in a linked list
 * @head: list to sum
 * Return: calculated sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
