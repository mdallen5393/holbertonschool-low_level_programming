#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array passed in
 * @size: size of array
 * @action: pointer to function that returns nothing and takes an int as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
