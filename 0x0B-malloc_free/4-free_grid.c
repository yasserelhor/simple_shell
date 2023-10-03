#include "main.h"

/**
 * free_grid - Frees a 2D grid of integers.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 *
 * This function frees the memory allocated for a 2D grid of integers.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
