#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - print alphabet
 *@str:size
 * Return:void
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ar = malloc(sizeof(char) * strlen(str));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ar + i) = *(str + i);
	}
	*(ar + i) = '\0';
	return (ar);
}
