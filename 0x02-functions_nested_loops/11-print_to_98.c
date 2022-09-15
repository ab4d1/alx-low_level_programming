#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - add
 *@n: int n
 * Return:void
 */

void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
		printf("%i", 98);
	} else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
		printf("%i", 98);
	} else
		printf("98");

	printf('\n');
}