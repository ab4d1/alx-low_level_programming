#include "main.h"
#include <stdio.h>

/**
 * set_string - _strchr
 *@s: pointer to int
 *@to: pointer to int
 * Return: print
 */

void set_string(char **s, char *to)
{
	to = *s;
	printf("%s", to);
}
