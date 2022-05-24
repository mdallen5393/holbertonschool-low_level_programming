#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet using _putchar
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
