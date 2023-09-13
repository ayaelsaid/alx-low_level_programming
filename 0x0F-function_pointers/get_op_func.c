#include <stdio.h>
#include "op.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * @s: operation
 * Return: NULL or ops[i].f
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

	if (s)
	{
	for (i=0; i < 6; i++)
	{
	if (strcmp(ops[i].op, s) == 0)
	return (ops[i].f);
	}
	}
        return (NULL);
}
