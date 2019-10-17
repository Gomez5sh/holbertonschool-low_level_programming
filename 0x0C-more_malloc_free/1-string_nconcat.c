#include "holberton.h"

/**
 * string_nconcat - status.
 *
 * @s1: variable.
 * @s2: variable
 * @n: variable
 *
 * Return: value of 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	char *nul = "";
	unsigned int i, j;

	for (i = 0; s1[i] != 00; i++)
	{}

	p = malloc(sizeof(*p) * (i + n) + 1);
	if (p == 00)
	{
		return (00);
	}
	if (!s1)
	{
		s1 = nul;
	}
	if (!s2)
	{
		s2 = nul;
	}
	for (j = 0; s1[j] != 00; j++)
	{
		p[j] = s1[j];
	}
	for (j = 0; s2[j] && j < n; i++, j++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
