#include "main.h"

/**
 * sqrt_rec - returns the natural square root of a number
 * @k: possible answer
 * @n: number to find square root of
 * Return: answer
 */
int sqrt_rec(int i, int n)
{
	int next;
       
	if (i * i <= n && (i + 1) * (i + 1) > n)
		return (i);

	next = (i + n / i) / 2;
	return (sqrt_rec(next, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: operand
 * Return: answer or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_rec(1, n));
}
