#include "holberton.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The evaluated input
 *
 * Description: Prints every other character of a string
 * Return: n value
 */

void puts2(char *str)
{
		int n = 0;
		int l;
		int c;

		while (str[n] != '\0')
		{
			n++;
		}

		l = n;

		for (c = 0; c < l; c++)
		{
			if (c % 2 == 0)
				_putchar(str[c]);
		}
		_putchar('\n');
}
