#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len;
	int n;
	int i;	

	len = 0;
	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = len - n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
