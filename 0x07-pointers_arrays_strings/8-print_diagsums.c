#include "main.h"

/**
 * print_diagsums - _strchr
 *@a: pointer to int
 *@size: pointer to int
 * Return: print
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < 8; i++)
	{
		sum1 += *(a + i)[i];
		sum2 += *(a + i)[size - i - 1]; 
	}
	printf("%i, %i", sum1, sum2);
}
