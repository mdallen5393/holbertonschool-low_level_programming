#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: prefix to check for
 * Return: number of bytes in initial segment of s which consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int count;

	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				k = j;
				while (s[k] == accept[i])
				{
					count++;
					k++;
				}
			}
			else
				j++;
		}
		i++;
	}
	return (count);
}
