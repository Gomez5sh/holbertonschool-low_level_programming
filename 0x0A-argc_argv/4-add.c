#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check - aux
 * @s: variable
 *
 * Return: res.
 */

int check(char s)
{
	int res;

	res = 1;
	if (s >= 48 && s <= 58)
	{
		res = 0;
	}
	return (res);
}
/**
 * main - argc my name program.
 * @argc: varianle
 * @argv: variable
 * Return:  0.
 */

int main(int argc, char **argv)
{
	int y, i, sum;

	for (i = 1; i < argc; i++)
	{
		y = check(**argv + 1);
		if (y == 1)
		{
			printf("Error\n");
			return (1);
		}
		if (y == 0)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (0);
}
