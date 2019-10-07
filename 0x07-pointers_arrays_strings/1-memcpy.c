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

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
