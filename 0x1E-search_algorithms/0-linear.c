#include "search_algos.h"

/**
 * linear_search - linear search algo.
 * @array: pointer.
 * @size: array size
 * @value: value.
 *
 * Return: value on success, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (!array)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       n, array[n]);
		if (array[1] == value)
			return (n);
	}
	return (-1);
}
