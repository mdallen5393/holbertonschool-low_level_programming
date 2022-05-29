#include "main.h"

void positive_or_negative(int i)
{
	printf("%i ", i);
	if (i < 0)
		printf("is negative");
	if (i == 0)
		printf("is zero");
	if (i > 0)
		printf("is positive");
	printf("\n");
		
}
