#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - print alphabet
 *@s1:size
 *@s2:char
 *@n:char
 * Return:void
 */

char *string_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

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
	char *args;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/*res = malloc(sizeof(char) * (1 + strlen(argv[1]) + strlen(argv[2])));*/
	args = malloc(sizeof(char) * (12 + strlen(argv[1]) + strlen(argv[2])));
	args = string_concat("echo ", argv[1]);
	args = string_concat(args, "*");
	args = string_concat(args, argv[2]);
	args = string_concat(args, " | bc");
	res = system(args);
	return (0);
}
