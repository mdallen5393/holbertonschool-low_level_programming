#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of type arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap, check;
	int x = 0;
	
	char cin;
	int iin;
	double fin;
	char *sin;

	va_start(ap, format);
	va_start(check, format);

	while (va_arg(check, void))
	{
		while(format[x] != '\0')
		{
			switch (format[x])
			{
				case 'c':
					cin = va_arg(ap, char);
					printf("%c", );
					break;
				case 'i':
					iin = va_arg(ap, int);
					printf("%d", );
					break;
				case 'f':
					fin = va_arg(ap, double);
					printf("%f", );
					break;
				case 's':
					sin = va_arg(ap, char *);
					if (s = NULL)
						printf("(nil)");
					if (s != NULL)
						printf("%s", s);
					break;
				default:
					break;
			}
			printf("\n");
		}
	}
}
