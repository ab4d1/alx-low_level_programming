#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + j);
		}

		if (i != 8 && j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);
}
