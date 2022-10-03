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

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	*(ar + i) = '\0';
	return (ar);
}
