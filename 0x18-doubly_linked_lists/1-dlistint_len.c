#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to linked list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numNodes = 0;

	while (temp)
	{
		numNodes++;
		temp = temp->next;
	}

	return (numNodes);
}
