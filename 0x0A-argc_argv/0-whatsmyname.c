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
	printf("%s\n", argv[0]);
	if (argc == 1)
		exit(EXIT_SUCCESS);
	exit(EXIT_SUCCESS);
}
