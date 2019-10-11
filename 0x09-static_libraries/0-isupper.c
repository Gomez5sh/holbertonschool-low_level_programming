#include "holberton.h"

/**
 * _isupper - returns 1 if lowercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _isupper(int c)

{

	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
