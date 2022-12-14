#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - print alphabet
 *@array:char
 *@size:char
 *@cmp:char
 * Return:void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
