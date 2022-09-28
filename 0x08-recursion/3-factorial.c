#include "main.h"

/**
 * factorial - _strchr
 *@n: pointer to int
 * Return: print
 */

int factorial(int n)
{
	if (n == 0)
		return 1;
	return (n + factorial(n - 1));
}
