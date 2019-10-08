#include "holberton.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * _strspn - function that locates a character in a string.
=======
 * _strpbrk - function that locates a character in a string.
>>>>>>> a3f133154eff492955e0c7a9d2300ba756b72874
 *@s: Variable 1
 *@accept: Variable 2
 * Return: s or null.
 */

<<<<<<< HEAD
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
=======
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
>>>>>>> a3f133154eff492955e0c7a9d2300ba756b72874
}
