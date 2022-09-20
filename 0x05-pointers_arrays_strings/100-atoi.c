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
	int sign = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '+')
			sign++;
		else if (*(s + i) == '-')
			sign--;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num = num * 10;
			num = (*(s + i) - '0');
		}
	}

	if (sign < 0)
		num = -num;
	return (num);
}
