#include "main.h"

/**
 * rev_string - rev_string
 *@s: pointer to int
 * Return: print
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	const l = len;
	char rev[l];

	for (i = len - 1; i >= 0; i--)
	{
		*(rev + j) = *(s + i);
		j++;
	}
}
