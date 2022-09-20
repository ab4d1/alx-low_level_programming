#include "main.h"

/**
 * swap_int - swap_int
 *@a: pointer to int
 *@b: pointer to int
 * Return: print
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
