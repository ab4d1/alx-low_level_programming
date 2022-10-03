#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * docss
 * @argc: no. of args
 * @argv: args
 * Return:0
 */

int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	if (*argv)
		exit(EXIT_SUCCESS);
	exit(EXIT_SUCCESS);
}