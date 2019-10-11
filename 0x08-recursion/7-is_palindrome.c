#include "holberton.h"
#include <stdio.h>

/**
 * l - check.
 * @s: pointer
 * Return:  l.
 */
int l(char *s)
{
	if (*s)
	{
		return (l(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * pointer_compare - aux.
 * @s: pointer.
 * @l: variable.
 *
 * Return: 0 or 1.
 */
int pointer_compare(int l, char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (s[l] != *s)
	{
		return (0);
	}

	return (pointer_compare(l - 2, s + 1));
}

/**
 * is_palindrome - If a string is a palindrome and.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int x = l(s);

	return (pointer_compare(x - 1, s));
}
