#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to find
 * @index: the index you wish to calculate
 * Return: value of bit at index or `-1` if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (!n || !index)
		return (-1);

	while (n != 0)
	{
		if (i == index)
			break;
		n /= 2;
		i++;
	}

	if (index > i)
		return (-1);

	return (n % 2);
}
