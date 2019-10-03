#include "holberton.h"

/**
 * _strcat - print the string
 * @src: The evaluated input
 * @dest: The evaluated input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int j, x;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[j] = src[x];
		j++;
	}

	return dest;
}
