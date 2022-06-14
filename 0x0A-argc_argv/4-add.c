#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 1 if arguments contain symbols that are not digits; 0 otherwise
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		j++;
	}

	printf("%d\n", sum);

	return (0);
}
