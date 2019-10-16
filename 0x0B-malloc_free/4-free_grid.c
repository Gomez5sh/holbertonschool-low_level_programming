#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - matrix 3x4
 * @width: variable
 * @height: variable
 * Return: **p or null
 */

void free_grid(int **grid, int height)
{


	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
