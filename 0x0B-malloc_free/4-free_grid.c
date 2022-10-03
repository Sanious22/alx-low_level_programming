#include "main.h"

/**
*free_grid - frees 2d array
*@grid: memory blockto freed
*@height: height of array
*Return: return void
*/

void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
