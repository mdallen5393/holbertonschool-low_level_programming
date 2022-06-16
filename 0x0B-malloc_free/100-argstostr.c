#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, curLen, counter = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][len])
			len++;
	}

	newStr = (char *)malloc(len * sizeof(char));

	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (i = 0; i < len && counter < ac; i++)
	{
		curLen = 0;
		while (av[counter][curLen] != '\0')
			curLen++;
		
		for (j = 0; j < curLen; j++)
		{
			newStr[i] = av[counter][j];
			printf("%c ", newStr[i]);
		}
		counter++;
	}
	newStr[i] = '\0';
	return (newStr);
}
