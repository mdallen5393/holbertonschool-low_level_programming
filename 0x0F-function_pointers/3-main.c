#include "3-calc.h"

/**
 * main - calculates simple mathematical operation
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 always.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;
	int (*op)(int, int);
	int divmod = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op = get_op_func(operator);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	divmod = (strcmp(operator, "/") == 0);
	divmod = (strcmp(operator, "%") == 0);

	/*if ((strcmp(operator, "/") == 0 || (strcmp(operator, "%")) == 0) && num2 == 0)*/
	if ((divmod == 1) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
