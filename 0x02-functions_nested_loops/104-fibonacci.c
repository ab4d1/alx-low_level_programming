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
	double a = 1;
	double b = 2;
	double fib = 0;

	printf("%f, %f, ", a, b);
	for (i = 1; i < 96; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%f, ", fib);
	}
	printf("%f\n", fib);
	return (0);
}
