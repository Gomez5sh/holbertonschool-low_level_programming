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
	unsigned int i, j, h, size, x;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (size = 0; s2[size] != '\0'; size++)
	{}

	if (size < n)
	{
		x = size;
	}
	else
	{
		x = n;
	}

	p = malloc(sizeof(char) * i + x + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0, h = 0; j < (i + x); j++)
	{
		if (j < i)
		{
			p[j] = s1[j];
		}
		else
		{
			p[j] = s2[h++];
		}
	}
	p[j] = '\0';
	return (p);
}
