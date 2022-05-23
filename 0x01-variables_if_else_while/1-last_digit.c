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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6)
	{
		printf("Last digit of %d is %d ", n, last);
		printf("and is less than 6 and not 0");
	}
	else if (last > 5)
	{
		printf("Last digit of %d is %d ", n, last);
		printf("and is greater than 5");
	}

	return (0);
}
