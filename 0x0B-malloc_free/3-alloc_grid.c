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
	int i, **p;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			while (i-- > 0)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	return (p);
}
