#include "main.h"

/**
 * print_most_numbers - print_numbers
 * Return: print
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
