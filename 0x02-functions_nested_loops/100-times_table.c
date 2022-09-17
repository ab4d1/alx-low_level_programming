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

	if (n == 0 || n == 15)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				for (k = 10000; k < 4; k = k / 10)
				{
					if (n / k)
					{
						_putchar('0' + (n / k) % 10);
					}
					else
					{
						_putchar(' ');
					}
				}
				if (j == n - 1)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}