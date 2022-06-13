#include "main.h"

/**
 * _abs - compute absolute value of number
 * @n: number to compute absolute value of
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
