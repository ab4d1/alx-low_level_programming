#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - print alphabet
 *@ac:size
 *@av:size
 * Return:void
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	unsigned long int j = 0;
	int len = 0;
	int scl = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	s = malloc((len + ac + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			s[scl] = av[i][j];
			scl++;
		}
		s[scl] = '\n';
		scl++;
	}
	s[scl] = '\0';
	return (s);
}
