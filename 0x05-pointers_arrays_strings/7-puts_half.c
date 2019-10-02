#include "holberton.h"

/**
 * puts_half - Prints every other character of a string
 * @str: The evaluated input
 *
 * Return: n value
 */

void puts_half(char *str)
{
	int n = 0;
	int l;
	int c;

	while (str[n] != '\0')
	{
		n++;
	}

	l = n;
	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n - 1) / 2;
	}

	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
