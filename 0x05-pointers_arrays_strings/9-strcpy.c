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
	int len = 0;
	char tmp[1000];

	for (i = 0; *(src + i) != '\0'; i++)
	{
		tmp[i] = *(src + i);
	}
	tmp[i] = *(src + i);
	*dest = tmp;
	return (&tmp);
}
