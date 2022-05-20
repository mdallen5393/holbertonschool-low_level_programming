#include <stdio.h>

/**
 * main - print string to standard error
 *
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(str) - 1, 1, stderr);
	return (1);
}
