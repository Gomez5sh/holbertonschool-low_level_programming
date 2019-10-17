#include "holberton.h"

/**
 * array_range - status.
 *
 * @max: variable.
 * @min: variable
 *
 * Return: value of 98.
 */

int *array_range(int min, int max)
{

	int *p, n = 0, i;

	if (min > max)
		return (NULL);

	i = max - min;

	p = malloc(sizeof(int) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (n = 0; n <= i; n++, min++)
	{
		p[n] = min;
	}
	return (p);
}
