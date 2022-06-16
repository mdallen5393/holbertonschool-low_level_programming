#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes w/spec. char
 * @size: num elements in array
 * @c: character to initialize array elements to
 * Return: pointer to character array, or NULL upon failure.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
