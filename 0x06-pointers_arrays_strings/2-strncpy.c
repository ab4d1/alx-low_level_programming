#include "main.h"

/**
 * _strncpy - _strncpy
 *@dest: pointer to int
 *@src: pointer to int
 *@n: int
 * Return: print
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int flag = 0;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		if (*(src + i) == '\0')
			flag = 1;
		else if (flag == 0)
			*(dest + i) = *(src + i);
		else if (flag == 1)
			*(dest + i) = 0;
	}
	*(dest + i) = '\0';
	return (dest);
}
