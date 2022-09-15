#include "main.h"

/**
 * jack_bauer - last digit
 *
 * Return:void
 */

void jack_bauer(void)
{
	int i = 0;
	int k = 0;

	for (i = 0; i < 24; i++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar('0' + (i / 10) % 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + (k / 10) % 10);
			_putchar('0' + k % 10);
			_putchar('\n');
		}
	}
}
