#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: Variable 1
 * @src: Variable 2
 * @n: variable 3
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
