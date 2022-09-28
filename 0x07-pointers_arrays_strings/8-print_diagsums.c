#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - _strchr
 *@a: pointer to int
 *@size: pointer to int
 * Return: print
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + size - i - 1));
	}
	printf("%i, %i\n", sum1, sum2);
}
