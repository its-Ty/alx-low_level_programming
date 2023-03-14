#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * free_grid - frees a location in memory
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int counter;

	if (grid == NULL)
	{
		free(grid);
	}

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}

	free(grid);
}
