#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Frees the allocated memory saved by alloc_grid
 * @grid: Grid created by alloc_grid
 * @height: Heigth of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
