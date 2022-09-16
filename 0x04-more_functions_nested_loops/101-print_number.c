#include <math.h>
#include "main.h"

/**
 * print_number - print
 *@n: int
 *Return: void
 */

void print_number(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 1000000000; n > 0 ; i = i / 10)
	{
		_putchar('0' + i % 10);
		if (n / i == 0)
		{
			break;
		}
		_putchar('0' + ((n / i) % 10));
		n = n / i;
	}
}