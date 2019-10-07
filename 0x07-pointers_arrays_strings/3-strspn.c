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

	int i, f, n;
	unsigned int a;

	for (n = 0; accept[n] != '\0'; n++)
	{
	}
		for (i = 0; i <= n; i++)
		{
			for (f = 0; accept[f] != '\0'; f++)
			{
				if (s[i] == accept[f])
				{
					a++;
				}
			}

		}
	return (a);
}
