#include "main.h"

/**
 * more_numbers - numbs
 * Return: void
 */

void more_numbers(void)
{
	for (i = 0; i < 15; i++)
	{
		if (i / 10)
			_putchar('0' + (i / 10) % 10);

		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
