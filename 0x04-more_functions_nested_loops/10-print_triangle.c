#include "holberton.h"

/**
 * print_triangle - print a triangle funtion.
 * @size: funtion to paint
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int l = 0;
	int f = 0;

	if (l >= size)
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
