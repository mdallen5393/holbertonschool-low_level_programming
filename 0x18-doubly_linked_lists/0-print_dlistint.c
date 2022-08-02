#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t numNodes = 0;

    if (!h)
        return (0);
        
    while (h)
    {
        printf("%i\n", h->n);
        numNodes++;
        h = h->next;
    }

    return (numNodes);
}
