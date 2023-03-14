#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * alloc_grid - return pointer to a 2D array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arrGrid;
	int c1, c2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arrGrid = malloc(height * sizeof(int *));

	if (arrGrid == NULL)
	{
		return (NULL);
	}

	for (c1 = 0; c1 < height; c1++)
	{
		arrGrid[c1] = malloc(width * sizeof(int));
		if (arrGrid[c1] == NULL)
		{
			for (c1 = 0; c1 < height; c1++)
			{
				free(arrGrid[c1]);
			}
			free(arrGrid);
			return (NULL);
		}
		for (c2 = 0; c2 < width; c2++)
		{
			arrGrid[c1][c2] = 0;
		}
	}

	return (arrGrid);
}
