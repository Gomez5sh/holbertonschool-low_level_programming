#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: poiner to the string.
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size < 0)
	{
		return (-1);
	}
	else
	{
		if (array == NULL && cmp == NULL)
		{
			return (-1);
		}
		else
		{
			for (n = 0; n < size; n++)
			{
				if (cmp(array[n]))
				{
					return (n);
				}
			}
		}
	}
	return (-1);
}
