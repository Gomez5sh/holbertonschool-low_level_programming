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
	unsigned int i, j, h;

	for (i = 0; s1[i] != '\0'; i++)
		;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0, h = 0; j < (i + n); j++)
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
