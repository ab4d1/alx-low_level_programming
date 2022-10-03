#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - print alphabet
 *@s1:size
 *@s2:size
 * Return:void
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ar = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		*(ar + i) = *(s1 + i);
	}
	for (i = 0; i < strlen(s2); i++)
	{
		*(ar + strlen(s1) + i) = *(s2 + i);
	}
	*(ar + strlen(s1) + i) = '\0';
	return (ar);
}
