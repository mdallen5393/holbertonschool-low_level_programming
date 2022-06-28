#include "variadic_functions.h"

/**
 * sum_them_all - adds up all args passed in after n
 * @n: count of number of optional args
 * Return: integer sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
