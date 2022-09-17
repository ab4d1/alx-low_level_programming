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
	int m = 1;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		m = m * 10;
		m = -(n % 10);
		n = n / 10;
		n = -n;
	}
	for (i = 0; n > 9 ; i++)
	{
		m = m * 10;
		m = m + n % 10;
		n = n / 10;
	}
	if (n != 0)
		_putchar('0' + n);
	for (j = 0; m > 9 ; j++)
	{
		_putchar('0' + m % 10);
		m = m / 10;
	}
}
