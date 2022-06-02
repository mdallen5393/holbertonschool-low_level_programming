#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char curr_src;
	char *curr_dest;

	i = 0;
	do {
		curr_src = *(src + i);
		curr_dest = dest + i;
		*curr_dest = curr_src;
		i++;
	} while (curr_src != '\0');

	return (dest);
}
