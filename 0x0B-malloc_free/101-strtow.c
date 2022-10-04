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
	char **s;
	int flag = 1;

	if (str[0] == '\0' || str == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' && flag == 0)
		{
			words++;
			flag = 1;
		}
		else if (str[i] != ' ')
			flag = 0;
	}
	s = (char **)malloc((words) * sizeof(char *));
	if (s[i] == NULL)
		free(s);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' && flag == 0)
		{
			s[word] = (char *)malloc(len * sizeof(char));
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
				s[word][j] = str[i - len + j];
			}
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
	}
	return (s);
}
