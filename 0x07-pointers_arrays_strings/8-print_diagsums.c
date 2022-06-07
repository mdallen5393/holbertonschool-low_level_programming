#include "main.h"
#include "stddef.h"
#include "stdio.h"

/**
 * print_diagsums - print sum of the two diagonals of a nxn matrix of ints
 * @a: input 2D array
 * @size: dimensions of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= size; i++)
	{
		if (i < size)
			sum1 += *(a + i * (size + 1));
		if (i > 0)
			sum2 += *(a + i * (size - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
