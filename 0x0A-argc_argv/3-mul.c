#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc my name program.
 * @argc: varianle
 * @argv: variable
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	}

	return (0);
}
