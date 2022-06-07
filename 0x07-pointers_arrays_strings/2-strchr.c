#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to locate
 * Return: pointer to the first occurrence of 'c' or 'NULL' if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (&s[i]);
}
