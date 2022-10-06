#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - print alphabet
 *@min:size
 *@max:char
 * Return:void
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		ar[i] = (min + i);
	}
	return (ar);
}
