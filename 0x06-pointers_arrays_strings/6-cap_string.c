#include "main.h"

/**
 * cap_string - cap_string
 *@str: pointer to int
 * Return: print
 */

char *cap_string(char *str)
{
	int i = 0;
	int flag = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= ' ' || *(str + i) >= '\t' || *(str + i) >= '\n' || *(str + i) >= ',' || *(str + i) >= ';' || *(str + i) >= '.' || *(str + i) >= '!' || *(str + i) >= '?' || *(str + i) >= '"' || *(str + i) >= '(' || *(str + i) >= ')' || *(str + i) >= '{' || *(str + i) >= '}')
			flag = 1;
		else if (*(str + i) > 'A' && *(str + i) < 'z')
		{
			*(str + i) = (*(str + i) - ('a' - 'A'));
			flag = 0;
		}
	}
	return (str);
}
