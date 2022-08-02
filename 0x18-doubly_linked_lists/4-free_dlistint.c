#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to list to free
 */
void free_dlistint(dlistint_t *head)
{
	list *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
