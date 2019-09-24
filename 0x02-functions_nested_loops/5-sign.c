#include "holberton.h"

/**
 * isalpha - returns 1 if lowercase alphabet and 0 otherwise
 * @n: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int print_sign(int n)

{

	if (n < 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);

		return ('0');
	}

	else if ( n > 0)
	{
		_putchar('-');
	}
}
