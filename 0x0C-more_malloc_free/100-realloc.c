#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int min = old_size;


	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	temp_ptr = malloc(new_size);
	if (temp_ptr == NULL)
		return (NULL);
	if (old_size > new_size)
		min = new_size;
	if (ptr != NULL)
	{
		memcpy(temp_ptr, ptr, min);
		free(ptr);
	}
	return (temp_ptr);
}
