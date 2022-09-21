#include "main.h"

/**
 * _strcmp - _strcmp
 *@s1: pointer to int
 *@s2: pointer to int
 * Return: print
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum = 0;
	int flag = 0;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0' ; i++)
	{
		if (*(s1 + i) == '\0')
			flag = 1;
		else if (flag == 0)
			sum += *(s1 + i) - *(s2 + i);
	}
	return (sum);
}
