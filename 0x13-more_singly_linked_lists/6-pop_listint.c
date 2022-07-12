#include "lists.h"

/**
 * pop_listint - deletes the head node of a "listint_t" linked list
 * @head: input list
 * Return: head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (!(*head))
		return (0);

	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
