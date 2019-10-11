#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_square - aux funtion.
 * @l: variable
 * @f: variable
 * Return: square.
 */

int _sqrt_square(int l, int f)
{

	if (l == f * f)
	{
		return (f);
	}
	else if (f * f > l)
	{
		return (-1);
	}

	return (_sqrt_square(l, f + 1));
}

/**
 * _sqrt_recursion-function that returns the natural square root of a number.
 * @n: variable
 *
 * Return: _sqrt_sequere
 */
int _sqrt_recursion(int n)
{
	int b = (_sqrt_square(n, 1));

	return (b);
}
