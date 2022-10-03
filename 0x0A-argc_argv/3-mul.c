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
	int i = 0;
	int a = argv[1];
	int b = argv[2];
	int m = a * b;

	printf("%s\n", m);
	if (argc == 3)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
