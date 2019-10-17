#include "holberton.h"

/**
 * malloc_checked - status.
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
