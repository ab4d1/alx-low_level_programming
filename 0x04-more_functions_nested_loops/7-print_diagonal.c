#include "main.h"

/**
 * print_diagonal - line
 *@n: int
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
