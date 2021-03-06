#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: always 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j < 10)
			{
				_putchar(' ');
				_putchar('0' + i * j);
			}
			else
			{
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
			}
		}
		_putchar('\n');
	}
}
