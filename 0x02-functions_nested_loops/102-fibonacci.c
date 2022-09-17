#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - entry
 *
 *Return: void
 */

int main(void)
{
	int i = 0;
	long int a = 1;
	long int b = 2;
	long int sum = 0;

	printf("%i, %i, ", a, b);
	for (i = 1; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%i, ", sum);
	}
	printf("%i\n", sum);
	return (0);
}
