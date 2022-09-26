#include "main.h"

/**
 * _memcpy - _memcpy
 *@dest: pointer to int
 *@src: pointer to int
 *@n: int
 * Return: print
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
