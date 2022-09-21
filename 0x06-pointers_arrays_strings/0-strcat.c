#include "main.h"

/**
 * _strcat - _strcat
 *@dest: pointer to char
 *@src: pointer to char
 * Return: print
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	*(dest + i) = *(src + i);
	return (dest);
}
