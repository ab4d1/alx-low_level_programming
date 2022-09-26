#include "main.h"

/**
 * _strchr - _strchr
 *@s: pointer to int
 *@c: pointer to int
 * Return: print
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (*(s + i));
	}
	return (NULL);
}
