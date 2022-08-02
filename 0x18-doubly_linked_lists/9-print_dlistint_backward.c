#include "lists.h"

/**
 * print_dlistint_backward - prints all elements of a dlistint_t list backward
 * @h: list to print
 * Return: number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t numNodes = 0;

	if (!h)
		return (0);

	while (h->next)
		h = h->next;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
		numNodes++;
	}

	return (numNodes);
}
