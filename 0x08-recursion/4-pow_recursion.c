#include "holberton.h"

/**
 * _pow_recursion - Returns the value.
 * @x: variable 1
 * @y: variable 2
 *
 *Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
