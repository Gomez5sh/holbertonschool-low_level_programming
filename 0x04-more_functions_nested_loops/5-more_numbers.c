#include "holberton.h"

/**
 * more_numbers - prints the numbers
 *
 * Return: not return
 *
 */

void more_numbers(void)
{

	int x;
	int n;

	for (x = '0'; x <= '14'; x++)
		_putchar(x);
	for (n = '0'; n <= '14'; n++)
		_putchar(n);
	_putchar('\n');
}
