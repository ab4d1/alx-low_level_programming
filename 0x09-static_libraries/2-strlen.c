#include "main.h"

/**
 * _strlen - _strlen
 *@s: pointer to int
 * Return: print
 */

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
