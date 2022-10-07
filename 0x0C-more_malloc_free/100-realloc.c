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
	char *temp_ptr;
	char *char_ptr = ptr;
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
	/*
	memcpy(temp_ptr, ptr, old_size);
	*/
	for (i = 0; i < new_size; i++)
		temp_ptr[i] = char_ptr[i];
	return (temp_ptr);
}
