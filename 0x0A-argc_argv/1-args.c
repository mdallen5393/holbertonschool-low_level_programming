#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: vector or arguments
 * Return: 0 always.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
