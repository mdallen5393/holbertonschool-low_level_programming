#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i = 0;
	int middle;

	while (s[len] != '\0')
		len++;

	middle = len / 2;
	for (len = len - 1; len >= middle; len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
}
