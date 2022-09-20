#include "main.h"

/**
 * puts_half - puts_half
 *@str: pointer to int
 * Return: print
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
