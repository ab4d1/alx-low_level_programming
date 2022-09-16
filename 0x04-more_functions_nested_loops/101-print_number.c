#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - print
 *@n: int
 *Return: void
 */

void print_number(int n)
{
	int i = 0;
	int j = 0;
	int m = 0;


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 0; n > 0 ; i = i * 10)
	{
		m = m * 10;
		m = n % i;
	}
	printf("%i", m);
}