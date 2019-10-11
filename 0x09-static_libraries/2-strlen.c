#include "holberton.h"

/**
 * _strlen - count the length
 * @s: pointer
 * Return: len for uppercase
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
