#include "main.h"

/**
 * _strcpy - _strcpy
 *@dest: pointer to int
 *@src: pointer to int
 * Return: print
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
