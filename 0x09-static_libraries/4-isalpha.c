#include "holberton.h"

/**
 * _isalpha - returns 1 if lowercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
