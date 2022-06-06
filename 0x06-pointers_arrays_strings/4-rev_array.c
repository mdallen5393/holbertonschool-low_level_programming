#include "holberton.h"

/**
 * reverse_array: reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
