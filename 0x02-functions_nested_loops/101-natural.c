#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - entry
 *
 *Return: void
 */

int main (void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1024 / 3; i++)
	{
		sum += i * 3;
	}
	for (i = 0; i < 1024 / 5; i++)
	{
		sum += i * 5;
	}
	printf("%i\n", sum);
	return (0);
}