#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - funtion 1
 * @s: variable.
 * Return: int value.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
/**
 * argstostr - funtion 1
 * @ac: variable.
 * @av: variable
 * Return: pointer to my malloc addres.
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int b, n, i, sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	for (b = 0; b < ac; b++)
	{
		sum = sum + _strlen(av[b]);
	}

	p = malloc((sum + ac + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	sum = 0;

	for (n = 0; n < ac; n++)
	{
		for (i = 0; av[n][i] != '\0'; i++)
		{
			p[sum] = av[n][i];
			sum++;
		}
		p[sum] = '\n';
		sum++;
	}
	return (p);
}
