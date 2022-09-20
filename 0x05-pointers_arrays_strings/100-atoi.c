#include "main.h"

/**
 * _atoi - _atoi
 *@s: pointer to int
 * Return: print
 */

int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = -1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			sign -= 1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num = num * 10;
			num = num - (*(s + i) - '0');
		}
	}


	return (sign * num);
}
