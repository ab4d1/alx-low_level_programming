#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - entry
 *
 *Return: void
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < 50; i++)
	{
		sum += i;
		printf("%i, ", sum);
	}
	printf("%i\n", sum);
	return (0);
}
