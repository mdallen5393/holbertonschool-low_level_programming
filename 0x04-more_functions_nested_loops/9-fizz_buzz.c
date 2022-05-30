#include <stdio.h>

/**
 * main - prints numbers 1 to 100, with "Fizz", "Buzz", and "FizzBuzz"
 * replacing multiples of 3, 5, and both, respectively.
 * Return: 0 always.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
