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
	char *Begin;
	char *pattern;

	while (*haystack)
	{
		Begin = haystack;	
		pattern = needle;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return Begin;

		str = Begin + 1;
	}

	return (NULL);
}
