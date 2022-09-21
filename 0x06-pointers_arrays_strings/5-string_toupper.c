#include "main.h"

/**
 * string_toupper - string_toupper
 *@str: pointer to int
 * Return: print
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = (*(str + i) - ('a' - 'A'));
	}
	return (str);
}
