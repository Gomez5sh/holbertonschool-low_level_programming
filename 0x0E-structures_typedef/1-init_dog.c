#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: variable 1
 * @name: variable 2
 * @age: variable 3
 * @owner: variable 4
 *
 * Return: only in else.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
