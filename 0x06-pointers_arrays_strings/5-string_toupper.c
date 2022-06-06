#include "holberton.h"

/**
 * string_toupper: changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
