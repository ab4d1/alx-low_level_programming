#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - print alphabet
 *@grid:size
 *@height:size
 * Return:void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
