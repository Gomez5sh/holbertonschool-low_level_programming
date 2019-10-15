#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: unsigned size variable
 * @c: variable
 *
 * Return: o or null.
 */

char *create_array(unsigned int size, char c)
{

	char *n;
	unsigned int x = 0;

	n = malloc(sizeof(char) * size);

	if ((size != 0) && (n != NULL))
	{
		while (x < size)
		{
			n[x] = c;
			x++;
		}
		return (n);
	}
	else
	{
		return (NULL);
	}

}
