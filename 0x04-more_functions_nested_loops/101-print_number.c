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
	} else if (n == 0)
	{
		_putchar('0');
	}

	for (i = 0; n > 9 ; i++)
	{
		m = m * 10;
		m = m + n % 10;
		n = n / 10;
	}
	_putchar('0' + n);
	for (j = 0; m > 0 ; j++)
	{
		_putchar('0' + m % 10);
		m = m / 10;
	}

}
