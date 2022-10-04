#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - print alphabet
 *@str:size
 * Return:void
 */

char **strtow(char *str)
{
	unsigned long int i = 0;
	int j = 0;
	int len = 0;
	int words = 0;
	int word = 0;
	int flag = 1;
	char **s;

	if (str[0] == '\0' || str == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && flag == 0)
		{
			words++;
			flag = 1;
		}
		else if (str[i] != ' ')
			flag = 0;
	}

	s = malloc(words * sizeof(char *));
	if (s[i] == NULL)
	{
		free(s);
		return (NULL);
	}
	flag = 1;
	printf("%i", words);
	for (i = 0; i <= strlen(str); i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && flag == 0)
		{
			*(s + word) = malloc(len * sizeof(char));
			if (s[word] == NULL)
			{
				while (word >= 0)
				{
					free(s[word]);
					word--;
				}
				free(s);
				return (NULL);
			}
			for (j = 0; j < len; j++)
			{
				s[word][j] = (char)str[i - len + j];
				printf("%c, %li", str[i - len + j], i - len + j);
			}
			printf("%s\n", s[word]);
			s[word][j] = '\0';
			word++;
			flag = 1;
			len = 0;
		}
		else if (str[i] == ' ')
			flag = 1;
		else
		{
			len++;
			flag = 0;
		}
		printf("c %c\ti= %lu\tword %i\tflag %i\tlen %i\n", str[i], i, word, flag, len);
	}
	return (s);
}
