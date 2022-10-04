#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - print alphabet
 *@grid:size
 *@height:size
 * Return:void
 */

void free_grid(int **grid, int height)
{
	int **grid;
	int i;

	if (height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
