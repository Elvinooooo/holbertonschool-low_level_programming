#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*free_grid - function that frees 2d array created before
*@grid: the two dimensional array
*@height: the height of two dimensional array
*
*Return: the result array on success. On failure NULL
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
