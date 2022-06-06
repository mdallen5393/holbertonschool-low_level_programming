#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		switch (s[i - 1]) {
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
				break;
			default:
				break;
		}
		i++;
	}

	return (s);
}
