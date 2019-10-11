#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - function that locates a character in a string.
*@s: Variable 1
*@accept: Variable 2
* Return: s or null.
*/

char *_strpbrk(char *s, char *accept)
{

	int n, c;

	for (n = 0; s[n] != 00; n++)
	{
		for (c = 0; accept[c] != 00; c++)
			if (s[n] == accept[c])
			{
				return (s + 2);
			}
	}
	return (00);
}
