#include "main.h"

void rev_string(char *s)
{
	int len = 0;
	int mid;
	int x;
	char temp;

	while (s[len] != '\0')
		len++;

	mid = len / 2;

	for (x = 0; x < mid; x++)
	{
		temp = s[x];
		s[x] = s[len];
		s[len] = temp;
		len--;
	}

}
