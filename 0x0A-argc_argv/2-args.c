#include "holberton.h"
#include <stdio.h>

/**
 * main - argc my name program.
 * @argc: varianle
 * @argv: variable
 * Return:  0.
 */

int main(int argc, char *argv[])
{

	(void) argc;

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
