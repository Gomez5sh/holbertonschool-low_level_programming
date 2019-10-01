#include "holberton.h"

/**
 * _puts - print
 * @str: pointer
 * Return: 0
 */

void _puts(char *str)
{

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}

		_putchar('\n');
}
