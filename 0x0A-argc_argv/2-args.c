#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 always.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
