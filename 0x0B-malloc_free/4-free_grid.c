#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 *
 * @height: height of array
 *
 * @grid: memory
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
	free(grid[j]);
	}
	free(grid);
}
