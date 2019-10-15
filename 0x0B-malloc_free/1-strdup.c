#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 *
 * @str: string variable.
 *
 * Return: 0 or null.
 */

char *_strdup(char *str)
{

	int n;
	int i;
	char *m;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n] != '\0'; n++)
	{}

	m = malloc(sizeof(*m) * n + 1);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		m[i] = str[i];
	}
	return (m);
}
