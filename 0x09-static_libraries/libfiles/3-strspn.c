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
	/*int k;*/
	unsigned int count;
	unsigned int temp;

	count = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		temp = count;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		if (count == temp)
			break;
		i++;
	}
	return (count);
}
