#include "function_pointers.h"

/**
 * array_iterator - Write a function that prints a name.
 * @array: intput array
 * @size: input size
 * @action: pointer to funtion input
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
