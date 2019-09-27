#include "holberton.h"

/**
 *print_square - Print a square
 *@size: value
 *Return: not return
 */

void print_square(int size)
{
	int l, f;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (f = 1; f <= size; f++)
			{
				_putchar('#');
	}
			_putchar('\n');
		}

	}
}
