#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - matrix 3x4
 * @width: variable
 * @height: variable
 * Return: **p or null
 */

int **alloc_grid(int width, int height)
{
	int n, i, **p;

	p = malloc(height * sizeof(int*));
	
	if (width > 0 || height > 0)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
			for (n = 0; n < width; n++)
			{
				p[i][n] = 0;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}
