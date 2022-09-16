#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_triangle - print
 *@size: int
 *Return: void
 */

int main(void)
{
	int i = 0;
	long int d = 612852475143;
	int lpf = 0;

	while (d > 1)
	{
		if (d % 2 == 0)
		{
			d = d / 2;
			lpf = 2;
		} else
		{
			printf("%i", d);
			for (i = 3; i < sqrt(d); i = i + 2)
			{
				if (d % i == 0)
				{
					printf("%i", i);
					d = d / i;
					lpf = i;
					break;
				}
			}

		}
	}
	printf("%i\n", lpf);

	return (0);
}