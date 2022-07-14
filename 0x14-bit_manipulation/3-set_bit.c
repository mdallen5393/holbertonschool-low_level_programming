#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input number
 * @index: bit to change
 * Return: 1 upon success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
		return (-1);

	*n = (1 << (unsigned long)index) | *n;
	return (1);
}
