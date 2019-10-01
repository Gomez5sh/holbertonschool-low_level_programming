#include "holberton.h"

/**
 * print_rev - print
 * @s: pointer
 * Return: 0
 */

void print_rev(char *s)
{

	int x;
	int n;

	n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}

	for (x = n; n >= 0; n--)
	{
		if (x != 0)
		{
			_putchar(*s);
		}
		s--;
	}

	_putchar('\n');
}
