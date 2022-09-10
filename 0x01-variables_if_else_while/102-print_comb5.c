#include <stdio.h>

/**
 * main - entry
 * print alphabet
 * Return:0
 */

int main(void)
{

	int i = 0;
	int j = 0;
	int k = 0;
	int u = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (u = j + 1; u < 10; u++)
				{

					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + u);

					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');


	return (0);
}
