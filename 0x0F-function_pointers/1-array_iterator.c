#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print alphabet
 *@array:char
 *@size:char
 *@action:char
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
