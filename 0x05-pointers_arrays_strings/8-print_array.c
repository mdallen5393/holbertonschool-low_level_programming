#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;
	int len;
	int stop;

	len = 0;
	while (a[len])
		len++;

	if (n <= 0)
		stop = 0;
	else if (n < len)
		stop = n;
	else
		stop = len;

	for (i = 0; i < stop; i++)
		if (i == stop - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);

	printf("\n");
}
