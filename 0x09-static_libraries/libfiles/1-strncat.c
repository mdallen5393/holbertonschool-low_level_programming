#include "main.h"

/**
 * _strncat - concatenate strings using at most 'n' bytes from "src".
 * @dest: string to be concatenated to
 * @src: string to concatenate to dest
 * @n: number of bytes of src
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n; j++)
	{
		if (src[j])
			dest[i] = src[j];
		else
			break;
		i++;
	}

	return (dest);
}
