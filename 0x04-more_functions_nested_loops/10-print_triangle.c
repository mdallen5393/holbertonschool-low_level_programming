#include "main.h"

/**
 * print_triangle - prints a triangle of specified size in the terminal.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size - i; j++)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
