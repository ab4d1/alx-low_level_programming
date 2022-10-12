#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - print alphabet
 *@s:char
 * Return:void
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 5;
	while (i >= 0)
	{
		if ((ops[i].op) == NULL || (ops[i].op)[0] == s[0])
			return (ops[i].f);
		i--;
	}
	return (NULL);
}
