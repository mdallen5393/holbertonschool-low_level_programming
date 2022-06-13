#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
