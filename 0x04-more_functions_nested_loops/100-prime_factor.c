#include "main.h"

/**
 * print_triangle - print
 *@size: int
 *Return: void
 */

int main(void)
{
	int i = 0;
	int n = 612852475143;
	int d = 612852475143;
	int lpf = 0;

	while (d > 1)
	{
		if (d % 2)
		{
			d = d / 2;
			lpf = 2;
		} else
		{
			for (i = 3; i < sqrt(d); i++)
			{
				if (d % i)
				{
					d = d / i;
					lpf = i;
				}
			}
		}
	}

	printf("%i", lpf);
	return (0);
}