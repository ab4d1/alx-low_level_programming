#include "main.h"

/**
 * print_rev - print_rev
 *@s: pointer to int
 * Return: print
 */

void print_rev(char *s)
{
	int l = _strlen(s);
	int i = 0;

	for (i = l-1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
