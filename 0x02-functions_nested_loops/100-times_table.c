#include <stdio.h>
#include "main.h"

/**
 * print_times_table - add
 *@n: int n
 * Return:void
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int mul = 0;

	if (n == 0 || n > 15)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n + 1; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j < n + 1; j++)
			{
				mul = i * j;
				if (mul / 1000)
				{
					_putchar('0' + (mul / 1000) % 10);
					_putchar('0' + (mul / 100) % 10);
					_putchar('0' + (mul / 10) % 10);
					_putchar('0' + (mul) % 10);
				}
				else if (mul / 100)
				{
					_putchar(' ');
					_putchar('0' + (mul / 100) % 10);
					_putchar('0' + (mul / 10) % 10);
					_putchar('0' + (mul) % 10);
				}
				else if (mul / 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mul / 10) % 10);
					_putchar('0' + (mul) % 10);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mul) % 10);
				}
				_putchar(',');
				if (j != n)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
