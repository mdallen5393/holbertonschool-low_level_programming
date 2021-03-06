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
	while (needle[len])
		len++;

	i = 0;
	while (haystack[i])
	{
		pos = i;
		j = 0;
		while (needle[j] && haystack[i] && haystack[i] == needle[j])
		{
			if (j == len - 1)
				return (haystack + pos);
			i++;
			j++;
		}
		i = pos + 1;
	}
	return (NULL);
}
