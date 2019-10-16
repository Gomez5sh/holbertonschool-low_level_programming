#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - matrix 3x4
 * @grid: variable
 * @height: variable
 * Return: no return.
 */

void free_grid(int **grid, int height)
{


	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
