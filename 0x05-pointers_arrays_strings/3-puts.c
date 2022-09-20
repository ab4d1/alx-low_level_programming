#include "main.h"

/**
 * _puts - _puts
 *@str: pointer to str
 * Return: print
 */

void _puts(char *str)
{
	int i = 0;


	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
}
