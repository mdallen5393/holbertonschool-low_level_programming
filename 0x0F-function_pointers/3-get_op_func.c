#include "3-calc.h"

/**
 * get_op_func - function that selects the correct operation to perform, asked by the user.
 * @s: operator passed as argument to the program
 * Return: pointer to correct function, or NULL if invalid
 */
int (*get_op_func(char *s))(int, int){

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (s != ops[i]->op)
		i++;

	return (op[i]->f);
}
