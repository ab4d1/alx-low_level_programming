#include "main.h"

/**
 * more_numbers - numbs
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 10; j++)
		for (i = 0; i < 15; i++)
		{
			if (i / 10)
				_putchar('0' + (i / 10) % 10);

			_putchar('0' + i % 10);
		}
		_putchar('\n');
}
