#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - print alphabet
 *@nmemb:size
 *@size:char
 * Return:void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*(ar + i) = 0;
	}
	return (ar);
}
