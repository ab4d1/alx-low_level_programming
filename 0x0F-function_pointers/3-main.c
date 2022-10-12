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
	char *s;

	if (argc != 4)
		exit(EXIT_FAILURE);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = malloc(sizeof(char) * 2);
	if (s == NULL)
	{
		free (s);
		exit(EXIT_FAILURE);
	}
	s = argv[2];
	printf("%i\n",(get_op_func(argv[2]))(a,b));
	return (0);
}
