#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to be appended to
 * @src: string to append to dest
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
