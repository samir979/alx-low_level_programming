#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - to free 2 dimension grid
 * @grid: pointer to grid int
 * @height: integer
 * Return: clean up memory
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
