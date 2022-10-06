#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - print alphabet
 *@ptr:size
 *@old_size:size
 *@new_size:size
 * Return:void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	temp_ptr = malloc(new_size);
	if (temp_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		temp_ptr[i] = ptr[i];
	}
	return (temp_ptr);
}
