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

	for (i = 1; i < 48; i++)
	{
		sum = a + b;
		if (!(a % 2 == 0) && !(b % 2 == 0))
			printf("%li", sum);
		a = b;
		b = sum;
	}
	return (0);
}
