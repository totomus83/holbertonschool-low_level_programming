#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: - grid
 * @height: - height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height > 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
