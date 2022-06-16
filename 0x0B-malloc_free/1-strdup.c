#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a ptr to space in memory with copy of string parameter
 * @str: string to store in new memory block
 * Return: pointer to new block of memory or NULL on error
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *newStr;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	len++;
	newStr = (char *)malloc(len * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		newStr[i] = str[i];

	return (newStr);
}
