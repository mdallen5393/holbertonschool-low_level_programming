#include "variadic_functions.h"

/**
 * print_strings - prints string arguments after n
 * @separator: string to print between strings
 * @n: number of strings after n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL)
			printf("%s", separator);
	}
	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
}
