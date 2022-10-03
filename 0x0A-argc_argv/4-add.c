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
	int j = 0;
	int sum = 0;
	int temp = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) !='\0'; j++)
		{
			printf("%c", *(argv[i] + j));
			if (*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9')
			{
				temp *= 10;
				temp += *(argv[i] + j) - '0';
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			printf("%c", *(argv[i] + j));

		}
		sum += temp;
	}
	printf("%i\n", sum);
	return (0);
}
