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

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
		{
			printf("Name:%s\n", d->name);
		}
		else
		{
			printf ("(nil)\n");
		}
		if (!d->age)
		{

			printf("Age:%s\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		if (!d->owner)
		{
			printf("Owner:%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
	else (d == 00)
	     {
		     printf("");
	     }
}
