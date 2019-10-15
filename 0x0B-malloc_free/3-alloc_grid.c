#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 *
 * @width: string variable.
 * @height: string variable.
 *
 * Return: 0 or null.
 */

int **alloc_grid(int width, int height)
{

	int i, n;
	int **p;

	p = malloc(height * sizeof(int*));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i ++)
	{
		*(p + i) = malloc(width * sizeof(int));

		if (*(p + i) == 0)
		{
			break;

			for (n = i; n >= 0; n --)
			{
				free (p + n);
			}
		}
	}
	return (p);
}
