#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D grid in alloc_grid function.
 * @grid: Pointer to the grid to be freed.
 * @height: The columns to be chcked.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
