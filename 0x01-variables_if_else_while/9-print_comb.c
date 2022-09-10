#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		if (i != 9)
			putchar(' ');
	}

	putchar('\n');


	return (0);
}
