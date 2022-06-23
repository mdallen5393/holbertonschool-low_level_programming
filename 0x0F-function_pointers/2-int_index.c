#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: integer array to search
 * @size: number of elements in array
 * @cmp: function pointer that returns an int and takes an int as parameter
 * Return: -1 if no match or size <= 0, 0 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
