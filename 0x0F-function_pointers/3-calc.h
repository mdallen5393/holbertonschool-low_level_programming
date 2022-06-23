#ifndef 3_CALC_H
#define 3_CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* function prototypes */

	/* 3-op_functions.c */
	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);

	/* 3-get_op_func.c */
	int (*get_op_func(char *s))(int, int);

#endif
