#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, in order, from min to max
 * @min: starting value (and min)
 * @max: ending value (and max)
 * Return: NULL if min > max or malloc fails, else pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int num_elements = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * num_elements);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < num_elements; i++, min++)
		ptr[i] = min;

	return (ptr);
}
