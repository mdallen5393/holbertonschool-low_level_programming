#include "function_pointers.h"

/**
 * print_name - function that prints a name, choosing which print to use
 * @name: pointer to name to print
 * @f: function pointer to function that takes a character pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
