#include "3-calc.h"

/**
 * *get_op_func - point to struct.
 * @s: the operator
 * Return: the value of s.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
	}
	printf("Error\n");
	exit(99);
}
