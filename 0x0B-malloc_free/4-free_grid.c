#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: the 2 dimensional of array
 * @height: height of grid
 *
 * File: 4-free_grid.c
 * Auth: Zuhair Ahmed
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
