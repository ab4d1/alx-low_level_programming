#include "main.h"

/**
 * print_last_digit - last digit
 * @n: int
 * Return:int
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n%10);
}
