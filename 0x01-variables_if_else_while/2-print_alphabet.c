#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int character;

	character = 'a';
	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
