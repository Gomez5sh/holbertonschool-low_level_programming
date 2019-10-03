#include "holberton.h"

/**
 * reverse_array - print
 * @a: pointer
 * @n: variable
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;
	int f;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		h = a[i];
		a[i] = a[n];
		a[n] = h;
		n--;
	}
}
