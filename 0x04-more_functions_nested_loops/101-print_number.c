#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int curr;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	curr = n % 10;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
			_putchar(curr + '0');
		}
		else
		{
			_putchar(curr + '0');
		}
	}	
}
