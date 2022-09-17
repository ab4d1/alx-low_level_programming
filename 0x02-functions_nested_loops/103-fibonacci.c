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
	long int fib = 0;
	long int sum = 2;

	for (i = 1; fib < 4000000; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if ((fib % 2) == 0)
			sum += fib;
	}
	printf("%li", sum);
	return (0);
}
