#include "main.h"

/**
 * _print_rev_recursion - _strchr
 *@s: pointer to int
 * Return: print
 */

void _print_rev_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*(s));

}
