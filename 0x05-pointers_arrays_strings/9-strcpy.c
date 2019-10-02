#include "holberton.h"

/**
 * puts_half - Prints every other character of a string
 * @str: The evaluated input
 *
 * Return: n value
 */

char *_strcpy(char *dest, char *src)
{

	int n = 0;

	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];

	dest[n] = src[n];

	return (dest);
}
