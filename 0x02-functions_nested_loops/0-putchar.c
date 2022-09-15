#include "main.h"

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	char *a = "_putchar";
	unsigned long int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');


	return (0);
}
