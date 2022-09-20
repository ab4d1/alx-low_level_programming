#include "main.h"

/**
 * rev_string - rev_string
 *@s: pointer to int
 * Return: print
 */

void rev_string(char *s)
{
	char rev[200];
	int i = 0;
	int j = 0;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		rev[j] = *(s + i);
		j++;
	}
	rev[len] = '\0';
	for (i = 0; i < len; i++)
	{
		*(s + i) = rev[i];
	}
}
