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
	int cents = 0;
	int change = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (cents / coins[i] != 0)
		{
			change += cents / coins[i];
			cents = cents % coins[i];
		}
	}
	printf("%i\n", change);
	return (0);
}
