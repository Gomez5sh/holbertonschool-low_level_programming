#include "holberton.h"

/**
 * _strcpy - variables
 * @src: The evaluated input
 * @dest: The evaluated input
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int n = 0;

	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];

	dest[n] = src[n];

	return (dest);
}
