#include "holberton.h"

/**
 * _strncat - print the string
 * @src: The evaluated input
 * @dest: The evaluated input
 * @n: The evaluated input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{

	int x;

s	for (x = 0; x < n && src[x] != '\0'; x++)

		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';


	return (dest);
}
