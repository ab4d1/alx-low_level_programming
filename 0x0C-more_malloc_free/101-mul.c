#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_concat_5 - print alphabet
 *@s1:size
 *@s2:char
 *@s3:char
 *@s4:char
 *@s5:char
 * Return:void
 */

char *string_concat_5(char *s1, char *s2, char *s3, char *s4, char *s5)
{
	char *cat;
	unsigned int i;
	unsigned int len;
	unsigned int temp_len = 0;

	len = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5);
	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}

	for (i = temp_len; i < temp_len + strlen(s1); i++)
		cat[i] = s1[i];
	temp_len = strlen(s1);
	for (i = temp_len; i < temp_len + strlen(s2); i++)
		cat[i] = s2[i - temp_len];
	temp_len += strlen(s2);
	for (i = temp_len; i < temp_len + strlen(s3); i++)
		cat[i] = s3[i - temp_len];
	temp_len += strlen(s3);
	for (i = temp_len; i < temp_len + strlen(s4); i++)
		cat[i] = s4[i - temp_len];
	temp_len += strlen(s4);
	for (i = temp_len; i < temp_len + strlen(s5); i++)
		cat[i] = s5[i - temp_len];
	temp_len += strlen(s5);
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

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	args = string_concat_5("echo ", argv[1], "*", argv[2], endstr);
	res = system(args);
	free(args);
	printf("\n");
	if (res == 0)
		return (0);
	return (0);
}
