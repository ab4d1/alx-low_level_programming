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
	for (i = 1000; i < n; i--)
	{
		if (n / (10 ** i))
		{
			break;
		}
		_putchar('0' + (n / (10 ** i) % 10));
		n = n / (10 ** i);
	}
}