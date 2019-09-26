#include "holberton.h"

/**
 * print_line - prints lines
 * @n: is the value
 * Return: not return
 *
 */

void print_line(int n)
{

	int x = 95;
	int l;

	for (l = 1; l <= n; l++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
