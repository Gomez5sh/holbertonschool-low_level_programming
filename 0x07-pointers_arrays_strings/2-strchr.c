#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *@s: Variable 1
 *@c: Variable 2
 * Return: s or null.
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}
}
