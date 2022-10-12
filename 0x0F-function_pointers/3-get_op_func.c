#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - print alphabet
 *@s:char
 * Return:void
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i++ < 5)
	{
		printf("%i", i);
		if ((ops[i].op)[0] == s[0])
			return *(ops[i].f);
	}
	return (NULL);
}