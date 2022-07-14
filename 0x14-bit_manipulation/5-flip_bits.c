#include "main.h"

/**
 * flip_bits - returns the num bits to flip to get from n to m
 * @n: source number
 * @m: destination number
 * Return: number of bit flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	unsigned long int num = n ^ m;

	while (num > 0)
	{
		flips++;
		num &= (num - 1);
	}
	return (flips);
}
