#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 * @d: variable 1
 *
 * Return: only in else.
 */

void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
