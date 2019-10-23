#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name.
 *
 * @name: pointer char.
 * @f: pointer void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	unsigned int i;

	if ((!array) || (!action))
		return;

	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
