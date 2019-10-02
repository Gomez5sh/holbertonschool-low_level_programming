#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print data of array
 * @a: input array
 * @n: input size of array
 * Return: void
 */

void print_array(int *a, int n)
{

	int x;

	x = 0;

	while (n > 0)
	{
		printf("%d", a[x]);
		x++;
		n--;
		if (n > 0)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
