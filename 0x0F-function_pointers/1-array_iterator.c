#include "function_pointers.h"

/**
 * array_iterator - executes a fn given as a param on each element
 * @array: array passed in
 * @size: size of array
 * @action: pointer to fn that returns nothing and takes an int as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
