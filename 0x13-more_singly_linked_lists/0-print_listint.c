#include "lists.h"

/**
 * print_listint - function that prints all elements of a "list_t" list.
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int numNodes = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		numNodes++;
	}

	return (numNodes);
}
