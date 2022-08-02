#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const list *temp = h;
	size_t numNodes = 0;

	if (!temp)
		return (0);

	while (temp)
	{
		printf("%i\n", temp->n);
		numNodes++;
		temp = temp->next;
	}

	return (numNodes);
}
