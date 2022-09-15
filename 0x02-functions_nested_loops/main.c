#include "main.h"

/**
 * print_alphabet - print
 * print alphabet
 * Return:void
 */

void print_alphabet(void)
{

	char alpha = 'a';
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha + i);
	}

	_putchar('\n');

}
