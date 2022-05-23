#include <stdio.h>

/**
 * main - print alphabet in lowercase except 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	int character;

	character = 'a';
	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
			putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
