#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	char alpha = '0';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(alpha + i);
	}

	putchar('\n');


	return (0);
}
