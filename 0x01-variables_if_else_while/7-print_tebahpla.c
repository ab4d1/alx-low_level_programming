#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	char alpha = 'z';
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha - i);
	}

	putchar('\n');


	return (0);
}
