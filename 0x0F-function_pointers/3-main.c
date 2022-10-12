#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"


/**
 * main - print alphabet
 *@argc: argc
 *@argv: argv
 * Return:void
 */

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", op_func(a, b));
	return (0);
}
