#include "holberton.h"

/**
 * print_chessboard - locate substring
 * @a:string
 *
 * Return: string locate substring
 */

void print_chessboard(char (*a)[8])
{

	int n, b, x;

	n = sizeof(*a);

	for (b = 0; b < n; b++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(a[b][x]);
		}
		_putchar('\n');
	}
}
