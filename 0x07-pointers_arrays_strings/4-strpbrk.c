#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: pointer to the byte in 's' matching one byte of "accept" or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	if (s[i] == accept[i])
		return (s + i);

	return (NULL);
}
