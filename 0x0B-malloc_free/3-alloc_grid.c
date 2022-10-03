#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - print alphabet
 *@width:size
 *@height:size
 * Return:void
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int**)malloc(sizeof(int) * width);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int*)malloc(sizeof(int) * width);
	}
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
