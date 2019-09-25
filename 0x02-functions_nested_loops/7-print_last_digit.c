#include "holberton.h"

/**
 * print_last_digit - returns 1 if lowercase alphabet and 0 otherwise
 * @n: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int print_last_digit(int n)

{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
		_putchar(x + '0');

	}

	else
	{
		_putchar(x + '0');
	}
	return (x);
}
