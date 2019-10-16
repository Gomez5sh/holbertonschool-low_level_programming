#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  concatenates two strings.
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
	
  p = malloc(height * sizeof(int *));
  
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  for (i = 0; i < height; i++)
    {
      *(p + i) = malloc(width * sizeof(int));
      
      if (*(p + i) == 0)
	{
	  break;
	  
	  for (n = i; n >= 0; n--)
	    {
	      p[i][n] = 0;
	      free(*(p + n));
			  }
	  free(p);
	}
    }
  return (p);
}
