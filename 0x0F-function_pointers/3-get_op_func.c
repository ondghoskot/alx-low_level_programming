#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function of the operator
 * @s: the operator passed as an argument to the program
 * Return: pointer to function correspondant to th eoperator
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (op[i].f);
		i++;
	}
	return (NULL);
}
