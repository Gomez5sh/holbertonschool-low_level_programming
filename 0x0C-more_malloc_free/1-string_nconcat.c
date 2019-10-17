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

	unsigned int i, j;
	char *p;

	for (i = 0; s1[i] != 00; i++)
	{}

	p = malloc(i + (n + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != 00; j++)
	{
		p[j] = s1[j];
	}

	j = 0;
	while (s2[j] && j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	return (p);
}
