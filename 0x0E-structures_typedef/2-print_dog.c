#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 * @d: variable 1
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
			printf("(nil)\n");
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
	else
	{
		printf("");
	}
}
