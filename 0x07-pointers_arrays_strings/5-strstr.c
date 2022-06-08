#include "main.h"
#include "stddef.h"
/**
 * _strstr - locate a substring within a string
 * @haystack: string to search
 * @needle: string to search for
 * Return: pointer to beginning of located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int pos;
	int len;

	len = 0;
	while (needle[len] != '\0')
		len++;

	i = 0;
	while (haystack[i])
	{
		pos = i;
		for(j = 0; j < len; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (j == len - 1)
					return (haystack + pos);
				i++;
			}
		}
		i++;
	}

	return (NULL);
}
