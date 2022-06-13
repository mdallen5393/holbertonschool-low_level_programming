#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to conver
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i;
	int numNegs;
	int numDigits;
	int start;
	char *numStr;
	int *curr;

	i = 0;
	numNegs = 0;
	numDigits = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && numDigits == 0)
			numNegs++;
		if (s[i] >= '0' && s[i] <= '9')
			start = i;
		while (s[i] >= '0' && s[i] <= '9')
		{
			curr = numStr + numDigits;
			*curr = s[i] - '0';
			numDigits++;
			i++;
		}
		i++;
	}
}
