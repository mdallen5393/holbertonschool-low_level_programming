#include "holberton.h"

/**
 * leet - encodes a string into 1337 (leet)
 * @s: string to convert
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i;
	int j;

	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = replace[j];
			j++;
		}
		i++;
	}

	return (s);
}
