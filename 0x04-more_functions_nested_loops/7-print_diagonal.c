#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 * @n: is the value
 * Return: not return
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int x;
	int l;

	for (l = 1; l <= n; l++)
	{
		for (x = 1; x <= l; x++)
		{
			if (x < l)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
