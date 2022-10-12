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
	int res = 0;

	if (argc != 4)
		exit(EXIT_FAILURE);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%s\n", argv[3]);
	res = (*get_op_func(argv[2]))(a, b);
	printf("%i\n",res);
	return (0);
}
