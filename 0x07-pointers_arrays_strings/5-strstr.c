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
	unsigned int len = 0;

	for (i = 0; *(needle + i) != '\0'; i++)
		len++;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		printf("%c ? %c , %ui\n", *(haystack + i), *(needle + i), j);
		if (*(haystack + i) == *(needle + j))
		{
			j++;
		}
		else if (*(haystack + i) != *(needle + j))
		{
			j = 0;
		}
		if (j == len)
		{
			return (haystack + i - len + 1);
		}
	}
	return (NULL);
}
