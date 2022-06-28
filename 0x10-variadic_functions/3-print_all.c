#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of type arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap, check;
	char cin, *sin, *seg = ", ";
	int iin, x = 0;
	double fin;

	va_start(ap, format);
	va_start(check, format);

		while (format[x] != '\0')
		{
			if (format[x + 1] == '\0')
				seg = "";
			switch (format[x])
			{
				case 'c':
					cin = va_arg(ap, int);
					printf("%c%s", cin, seg);
					break;
				case 'i':
					iin = va_arg(ap, int);
					printf("%d%s", iin, seg);
					break;
				case 'f':
					fin = va_arg(ap, double);
					printf("%f%s", fin, seg);
					break;
				case 's':
					sin = va_arg(ap, char *);
					if (sin == NULL)
						sin = "(nil)";
					printf("%s%s", sin, seg);
					break;
				default:
					break;
			}
			x++;
		}
		printf("\n");
}
