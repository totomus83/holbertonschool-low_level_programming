#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate space for a 2D array of int
 * @width: number of integer in a row
 * @height: number of row(s)
 * Return: return the variable grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = 0;
	j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
