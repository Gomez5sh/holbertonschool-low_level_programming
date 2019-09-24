#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int a, x;

	for (x = 1; x <= 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	}
	_putchar('\n');
}
