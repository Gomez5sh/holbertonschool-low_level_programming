#include "holberton.h"

/**
 * print_binary - funtion to print a binary.
 * @n: variable.
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	printf("%lu", n & 1);
}
