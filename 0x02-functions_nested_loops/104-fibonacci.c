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
	float a = 1;
	float b = 2;
	float fib = 0;

	printf("%d, %d, ", a, b);
	for (i = 1; i < 96; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%d, ", fib);
	}
	printf("%d\n", fib);
	return (0);
}
