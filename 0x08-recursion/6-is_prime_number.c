#include "main.h"

/**
 * prime - return 1 if integer input is prime, otherwise 0
 * @n: number to check
 * @i: number to test with
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int i)
{
	if (i < 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if integer input is prime, otherwise 0
 * @n: operand
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, n / 2));
}
