#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	char alpha = 'a';
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if (!(i == 4 || i == 16))
			putchar(alpha + i);
	}

	putchar('\n');


	return (0);
}
