#include "main.h"

/**
 * _strncat - _strncat
 *@dest: pointer to int
 *@src: pointer to int
 *@n: int
 * Return: print
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	*(dest + len + i) = *(src + i);
	*(dest + len + i + 1) = '\0';
	return (dest);
}
