#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether random number is postive, negative, or 0.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero", n);
	return (0);
}
