#include "holberton.h"

/**
 * _isdigit - returns 1 if lowercase number and 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _isdigit(int c)

{

	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
