#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int l1 = 0, l2 = 0, i;

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2])
		l2++;

	if (s1 == NULL)
		l1 = 0;

	if (s2 == NULL)
		l2 = 0;

	s3 = malloc((l1 + l2) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		s3[i] = s1[i];

	for (i = 0; i < l2; i++)
		s3[i + l1] = s2[i];

	return (s3);
}
