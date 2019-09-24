#include "holberton.h"

/**
 * jack_bauer - returns 1 if lowercase alphabet and 0 otherwise
 *
 * Return: 0 for uppercase, 1 for lowercase
 */

void jack_bauer(void)

{
	int h, m, hr, hr2, min, min2;

	hr, hr2, min, min2 = 0;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			hr = h / 10;
			hr2 = h % 10;
			min = m / 10;
			min2 = m % 10;

			_putchar('0' + hr);
			_putchar('0' + hr2);
			_putchar(':');
			_putchar('0' + min);
			_putchar('0' + min2);
			_putchar('\n');
		}
	}


}
