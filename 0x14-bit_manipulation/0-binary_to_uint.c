#include "main.h"
#include "_pow.c"
#include <string.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string of 0 and 1 characters
 * Return: converted number or 0 with invalid input (NULL or not 0s or 1s)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			dec += myPow(2, strlen(b) - i - 1);

		i++;
	}

	return (dec);
}
