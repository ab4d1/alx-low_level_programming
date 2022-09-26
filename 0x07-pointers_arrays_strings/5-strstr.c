#include "main.h"
#include <stdio.h>

/**
 * _strstr - _strchr
 *@haystack: pointer to int
 *@needle: pointer to int
 * Return: print
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
				flag = 1;
			else if (*(haystack + i) != *(needle + j))
				flag = 0;
		}
		if (flag == 1)
			return (haystack + i);
	}
	return (NULL);
}
