#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	return (-1);
}
