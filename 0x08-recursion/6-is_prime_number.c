#include "holberton.h"
#include <stdio.h>
/**
 * _prime - print result.
 * @y: variable.
 * @x: variable.
 *
 * Return: _prime.
 */
int _prime(int y, int x)
{
	int b = y % x;

	if (y <= 1)
	{
		return (0);
	}

	if (x < y &&  b == 0)
	{
		return (0);
	}


	if (x == y && b == 0)
	{
		return (1);
	}

	return (_prime(y, x + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number.
 * @n: variable.
 * Return: f.
 */
int is_prime_number(int n)
{
	int f = _prime(n, 2);

	return (f);
}
