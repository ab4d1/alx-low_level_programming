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
	int sum = 1;

	for (i = 1; i < 50; i++)
	{
		printf("%i, ", sum);
		sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
