#include "lists.h"

/**
 * free_listint - function that frees a "listint_t" list
 * @head: input list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
