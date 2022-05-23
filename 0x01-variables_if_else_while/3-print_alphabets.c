#include <stdio.h>

/**
 * main - print the alphabet in lowercase, then uppercase
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

	character = 'A';
	while (character <= 'Z')
	{
		putchar(character);
		character++;
	}

	putchar('\n');
	return (0);
}
