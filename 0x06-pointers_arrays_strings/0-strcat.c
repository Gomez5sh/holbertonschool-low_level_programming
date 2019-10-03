#include "holberton.h"

/**
 * _strcpy - variables
 * @src: The evaluated input
 * @dest: The evaluated input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int n, x;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}

	for (x = 0; src[x] != '\0'; x++, n++)
	{
		dest[n] = src[x];
	}

	return(dest);
}
