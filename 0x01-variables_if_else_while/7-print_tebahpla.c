#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int character;

	character = 'z';
	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
