#include "holberton.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: variable
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;
	char *a = s;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
		return (s);
}
