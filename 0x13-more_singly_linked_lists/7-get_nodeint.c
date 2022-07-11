#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a "listint_t" linked list.
 * @head: list to search
 * @index: element to find
 * Return: nth node of the list, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
