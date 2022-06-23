#include "3-calc.h"

/**
 * main - calculates simple mathematical operation
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 always.
 */
int main(char argc, char *argv)
{
	int num1, num2;
	char operater;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operation == divide || operation == mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (0);
}
