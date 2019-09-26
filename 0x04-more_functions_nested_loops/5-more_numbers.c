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

	for (x = 0; x < 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{

		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
