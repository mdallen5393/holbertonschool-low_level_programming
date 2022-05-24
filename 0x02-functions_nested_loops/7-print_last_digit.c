#include "main.h"

/**
 * print_last_digit - returns the value of the last digit
 * @n: digit to operate on
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	if(n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
