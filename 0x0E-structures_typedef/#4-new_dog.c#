#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Write a function that creates a new dog.
 *
 * @name: variable 2
 * @age: variable 3
 * @owner: variable 4
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;


	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
