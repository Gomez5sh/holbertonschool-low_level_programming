#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @size: funtion to paint
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int l = 0;
	int f;

	if (l > size)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (f = 1; f <= size; f++)
			{
				if (f <= size - l)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
