#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *str)
{
	unsigned long int i;
	int words = 0;
	int flag = 1;

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
	return (words);
}

void free_array(char **array, int size)
{
	while (size >= 0)
	{
		free(array[size]);
		size--;
	}
	free(array);
}

/**
 * strtow - print alphabet
 *@str:size
 * Return:void
 */

char **strtow(char *str)
{
	unsigned long int i = 0;
	int j, words;
	int len = 0;
	int word = 0;
	int flag = 1;
	char **s;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	words = count_words(str);
	s = malloc((words + 1) * sizeof(char *));
	if (s == NULL || words == 0)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && flag == 0)
		{
			*(s + word) = malloc((len + 1) * sizeof(char));
			if (s[word] == NULL)
			{
				free_array(s, word);
				return (NULL);
			}
			for (j = 0; j < len; j++)
			{
				s[word][j] = (char)str[i - len + j];
			}
			s[word][j] = '\0';
			word++;
			flag = 1;
			len = 0;
		} else if (str[i] != ' ')
		{
			len++;
			flag = 0;
		}
	}
	s[word] = NULL;
	return (s);
}
