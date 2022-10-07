#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_concat - print alphabet
 *@s1:size
 *@s2:char
 * Return:void
 */

char *string_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i;

	cat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		cat[i] = s1[i];
	}
	for (i = strlen(s1); i < strlen(s1) + strlen(s2); i++)
	{
		cat[i] = s2[i - strlen(s1)];
	}
	cat[i] = '\0';
	return (cat);
}

/**
 * main - entry
 * docss
 * @argc: no. of args
 * @argv: args
 * Return:0
 */

int main(int argc, char **argv)
{
	int res;
	unsigned int i;
	char *args;
	char *endstr = " | bc | tr -d '\\\\' | tr -d '\\\n'";
	char *startstr = "echo ";

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < strlen(argv[1]); i++)
		if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				printf("Error\n");
				exit(98);
			}
	for (i = 0; i < strlen(argv[2]); i++)
		if (argv[2][i] < '0' || argv[2][i] > '9')
			{
				printf("Error\n");
				exit(98);
			}
	args = malloc(sizeof(char) * (strlen(startstr) + strlen(endstr) + 2 + strlen(argv[1]) + strlen(argv[2])));
	if (args == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	args = string_concat(startstr, argv[1]);
	args = string_concat(args, "*");
	args = string_concat(args, argv[2]);
	args = string_concat(args, endstr);
	res = system(args);
	free(args);
	printf("\n");
	if (res == 0)
		return (0);
	return (0);
}
