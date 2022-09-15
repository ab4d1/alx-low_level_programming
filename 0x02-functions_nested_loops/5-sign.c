#include "main.h"

/**
 * print_sign - is alpha case?
 * @n: int
 * Return:1 if true
 */

int print_sign(int n)
{
	int ret = 0;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	} else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	} else
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
