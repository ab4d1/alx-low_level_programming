#include "main.h"

/**
 * reset_to_98 - reset_to_98
 *@a: pointer to int
 *@b: pointer to int
 * Return: print
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = a;
	*b = *a;
	*a = temp;
}
