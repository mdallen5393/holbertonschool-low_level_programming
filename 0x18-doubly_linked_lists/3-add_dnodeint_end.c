#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to list to add to
 * @n: new node's data
 * Return: address of the new element, or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	list *temp = *head;
	list *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
