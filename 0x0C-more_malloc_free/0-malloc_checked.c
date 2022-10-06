#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - print alphabet
 *@b:size
 * Return:void
 */

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}
