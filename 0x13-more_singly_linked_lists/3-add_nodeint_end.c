#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a "listint_t" list.
 * @head: pointer to list
 * @n: integer to store in new node.
 * Return: address of new element, or "NULL" upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
