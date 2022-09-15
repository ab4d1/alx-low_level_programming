#include <stdio.h>
#include <string.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	char *a = "_putchar";
	unsigned long int i = 0;

	for (i = 0; i < strlen(a); i++)
	{
		putchar(a[i]);
	}

	putchar('\n');


	return (0);
}
