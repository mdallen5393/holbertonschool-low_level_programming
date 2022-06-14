#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments - should be 2
 * @argv: vector of arguments - contains cents input
 * Return: 1 if number of args is not exactly 2; 0 otherwise.
 */
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;
	int temp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		temp = cents / 25;
		coins += temp;
		cents %= 25;

		temp = cents / 10;
		coins += temp;
		cents %= 10;

		temp = cents / 5;
		coins += temp;
		cents %= 5;

		temp = cents / 2;
		coins += temp;
		cents %= 2;

		coins += cents;
	}

	printf("%d\n", coins);

	return (0);
}
