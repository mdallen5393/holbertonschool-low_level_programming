#include "main.h"

/**
 * factorial - returns the factorial of a given positive number
 * @n: operand
 * Return: factorial of n or -1 for values less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
