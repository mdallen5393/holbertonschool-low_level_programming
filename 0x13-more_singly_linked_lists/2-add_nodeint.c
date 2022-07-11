#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a "listint_t" list.
 * @head: pointer to input list
 * @n: new node integer value
 * Return: address of new element, or "NULL" if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));
	
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = temp;
	*head = newNode;

	return (newNode);
}
