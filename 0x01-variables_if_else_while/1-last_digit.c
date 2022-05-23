#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of random number, n.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf("Last digit of %d is %d ", n, last);
		printf("and is less than 6 and not 0\n");
	}
	else if (last > 5)
	{
		printf("Last digit of %d is %d ", n, last);
		printf("and is greater than 5\n");
	}

	return (0);
}
