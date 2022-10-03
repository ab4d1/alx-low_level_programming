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
		return NULL;

	grid = malloc(sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(grid + i * width + j) = 0;
		}
	}
	return (grid);
}
