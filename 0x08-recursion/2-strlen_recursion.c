#include "main.h"

/**
 * _strlen_recursion - _strchr
 *@s: pointer to int
 * Return: print
 */

int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
