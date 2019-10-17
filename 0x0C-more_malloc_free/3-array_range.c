#include "holberton.h"

/**
 * string_nconcat - status.
 *
 * @s1: variable.
 * @s2: variable
 * @n: variable
 *
 * Return: value of 98.
 */

int *array_range(int min, int max)
{

	int *p, n = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(p) * (max - min) + 2);

	if (p == NULL)
		return (NULL);

	for (min = 0; min <= max; min++, n++)
	{
		p[n] = min;
	}
	return (p);
}
