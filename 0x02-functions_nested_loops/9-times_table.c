#include "main.h"

/**
 * times_table - last digit
 *
 * Return:void
 */

void times_table(void)
{
	int i = 0;
	int k = 0;
	int m = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		for (k = 1; k < 10; k++)
		{
			m = i * k;
			if (m / 100)
			{
				_putchar('0' + (m / 100) % 10);
				_putchar('0' + (m / 10) % 10);
				_putchar('0' + m % 10);
			} else if (m / 10)
			{
				_putchar(' ';
				_putchar('0' + (m / 10) % 10);
				_putchar('0' + m % 10);
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m % 10);
			}
			if (k == 9)
				_putchar(',');
		}
	}
}