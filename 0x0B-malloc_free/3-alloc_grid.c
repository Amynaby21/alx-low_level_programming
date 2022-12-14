#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 *@width: The width of the arrays
 *@height: The height of the arrays
 *
 *Return: NULL on failure, NULL if width or height is 0 or negative
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
