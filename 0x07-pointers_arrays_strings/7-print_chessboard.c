#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - _strchr
 *@a: pointer to int
 * Return: print
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
	return;
}
