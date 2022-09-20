#include <stdio.h>
#include "main.h"

/**
 * print_array - print_array
 *@a: pointer to int
 *@n: int
 * Return: print
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", *(a + i));
	}
	if (n > 0)
		printf("%i\n", *(a + n - 1));
}
