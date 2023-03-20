#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a
 * sorted skip list of integers.
 *
 * @list: pointer to the head node of the skip list
 * @value: integer to search for
 * Return: a pointer to the node containing the integer
 * we are searching for
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list;
	skiplist_t *temp;

	while (curr)
	{
		if (curr->n == value)
			return (curr);

		temp = curr->express;

		if (!curr->express || (curr->n < value && curr->express->n > value))
		{
			printf("Value found between indexes [%lu] and [%lu]\n", curr->index, temp->index);
			while (curr->n != temp->n)
			{
				if (curr->n == value)
					return (curr);
				curr = curr->next;
			}
			return (NULL);
		}
		curr = temp;
	}
	return (NULL);
}

int calc_skip(skiplist_t *list)
{
	int skip;
	int list_len = 0;

	while (list->next)
	{
		list = list->next;
		list_len++;
	}
	list_len++;

	skip = (int)sqrt((double)list_len);

	return (skip);
}
