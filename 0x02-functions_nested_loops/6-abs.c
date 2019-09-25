#include "holberton.h"

/**
 * int _abs - returns 1 if lowercase alphabet and 0 otherwise
 * @n: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _abs(int n)

{

	if (n<0)
	{
		n=n*-1;
		return (n);
	}
	return (n);
}
