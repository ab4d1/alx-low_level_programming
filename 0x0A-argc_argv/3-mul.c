#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * docss
 * @argc: no. of args
 * @argv: args
 * Return:0
 */

int main(int argc, int **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	printf("%i\n", argv[1] * argv[2]);
	return (0);
}
