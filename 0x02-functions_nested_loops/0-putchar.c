#include "main.h"

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
