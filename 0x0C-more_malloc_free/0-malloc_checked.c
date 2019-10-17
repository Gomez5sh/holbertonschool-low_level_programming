#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function should cause normal process termination with a status.
 *
 * @b: string variable.
 *
 * Return: value of 98.
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		free(p)
		exit(98);
	}

	return (p);
}
