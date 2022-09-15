#include "main.h"

/**
 * jack_bauer - last digit
 *
 * Return:void
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;

	for (i = 0; i < 3; i++)
	{
		_putchar('0' + i);
		for (j = 0; j < 4; j++)
		{
			_putchar('0' + j);
			_putchar(':');
			for (k = 0; k < 6; k++)
			{
				_putchar('0' + k);
				for (n = 0; n < 10; n++)
				{
					_putchar('0' + n);
				}
			}
		}
	}
}
