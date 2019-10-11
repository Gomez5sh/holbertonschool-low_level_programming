#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that locates a character in a string.
 *@s: Variable 1
 *@accept: Variable 2
 * Return: s or null.
 */

unsigned int _strspn(char *s, char *accept)
{

	int n, a;

	for (n = 0; s[n] != '\0'; n++)
	{

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (accept[a] == s[n])
				break;
		}
		if (!accept[a])
			break;
	}
	return (n);
}
