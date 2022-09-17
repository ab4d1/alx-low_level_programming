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
	int k = 0;
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
				for (k = 100; k >= 1; k = k / 10)
				{
					
					if (mul / k)
					{
						_putchar('0' + (mul / k) % 10);
					}
					else
					{
						_putchar(' ');
					}
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
