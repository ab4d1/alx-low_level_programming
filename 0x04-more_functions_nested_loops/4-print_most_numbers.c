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
		if (i != 4 || i != 2)
			_putchar('0' + i);
	}
	_putchar('\n');
}
