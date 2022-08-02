#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to list to add to
 * @n: new node's data value
 * Return: address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	if (*head)
		(*head)->prev = newNode;

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	*head = newNode;
	return (*head);
}
