#include "main.h"

/**
 * _sqrt_recursion - _strchr
 *@n: pointer to int
 * Return: print
 */

int _sqrt_recursion(int n)
{
	int guess = _sqrt_recursion(n);
	if (guess * guess == n)
		return (guess);
	else 
		return (--guess);
	return (n);
}
