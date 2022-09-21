#include "main.h"

/**
 * reverse_array - reverse_array
 *@a: pointer to int
 *@n: pointer to int
 * Return: print
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int *b;

	for (i = 0; i < n; i++)
	{	
		*(b + i) = *(a + i);
	}
	for (i = n - 1; i >= 0; i--)
	{
		*(a + i - n + 1) = *(b + i);
	}
}
