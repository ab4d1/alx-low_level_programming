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

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}
	for (i = len - (len / 2); i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
