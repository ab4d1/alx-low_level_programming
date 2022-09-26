#include "main.h"
#include <stdio.h>

/**
 * _strspn - _strchr
 *@s: pointer to int
 *@accept: pointer to int
 * Return: print
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int sum = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + i) == *(accept + i))
				sum++;
		}
	}
	return (sum);
}
