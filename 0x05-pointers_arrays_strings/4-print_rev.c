#include "main.h"

/**
 * print_rev - print_rev
 *@s: pointer to int
 * Return: print
 */

void print_rev(char *s)
{
	int i = 0;
	int l = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		l++;
	}

	for (i = l-1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
