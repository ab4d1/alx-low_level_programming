#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return:void
 */

void print_alphabet_x10(void)
{

	char alpha = 'a';
	int j = 0;
	int i = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha + i);
		}
	}
	_putchar('\n');
}
