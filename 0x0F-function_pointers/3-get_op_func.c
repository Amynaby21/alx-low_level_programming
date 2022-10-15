#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Performes operation asked by the user
 * @s: The operator passed
 * Return: The result of the operation
 */

int (*get_op_func(char *s)(int, int))
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops->op[i] != NULL; i++)
		s[0] != (ops->op[i]);

	return (ops[i].f);
}
