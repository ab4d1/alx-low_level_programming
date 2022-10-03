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
	if (argc != 3)
	{
		printf("\n");
		return (1);
	}

	int i = 0;
	int a = argv[1];
	int b = argv[2];
	int m = a * b;

	return (0);
}
