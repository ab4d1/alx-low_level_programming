#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - print alphabet
 *@size:size
 *@c:char
 * Return:void
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (*(ar) == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	*(ar + i) = '\0';
	return (ar);
}