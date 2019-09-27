#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 * @n: is the value
 * Return: not return
 *
 */

void print_diagonal(int n)
{
	int l, f;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	for (l = 1; l <= n; l++)
	{
		for (f = 1; f <= l; f++)
		{
			if (f < l)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(92);
			}
		}
		_putchar('\n');
	}
	}
}
