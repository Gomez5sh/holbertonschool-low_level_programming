#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check - aux
 * @s: variable
 *
 * Return: res.
 */

int main(int argc, char **argv)
{
	int i;
	int n = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > 48 && *argv[i] < 57)
			{
				n = n + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", n);
	}
	return (0);

}
