#include "holberton.h"

/**
 * _strcmp: compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal, -15 if s1 < s2, 15 if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int diff;
	int i;

	diff = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (diff);
}
