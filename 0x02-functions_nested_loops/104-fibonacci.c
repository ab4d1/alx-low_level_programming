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
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int fib = 0;

	printf("%li, %li, ", a, b);
	for (i = 1; i < 90; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%li, ", fib);
	}
	printf("%li\n", a + b);
	return (0);
}
