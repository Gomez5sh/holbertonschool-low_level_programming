#include "holberton.h"

/**
 * print_rev - print
 * @s: pointer
 * Return: 0
 */

void rev_string(char *s)
{

	int  f, i;
	char h;


	h = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
	}

	f = f -1;

	for (i = 0; i <= f; i++)
	{
		h = s[i];
		s[i] = s[f];
		s[f] = h;
		f--;
	}
}
