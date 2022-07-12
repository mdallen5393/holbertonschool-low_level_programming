#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: list passed in
 * @idx: index of the list where new node should be added
 * @n: number to be added into new node
 * Return: the address of the new node, or NULL upon failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));
	unsigned int i = 0;

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp)
	{
		if (i == idx - 1)
			break;
		i++;
		temp = temp->next;
	}

	if (i < idx - 1)
		return (NULL);

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
