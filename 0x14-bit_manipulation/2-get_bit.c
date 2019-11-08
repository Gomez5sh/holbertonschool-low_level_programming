#include "holberton.h"

/**
 * get_bit - return the value of bits.
 * @n: unsigned variable.
 * @index: unsigned variable.
 * Return: value of bits or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long h;

	h = sizeof(n) * 8;

	if (index > (h - 1))
		return (-1);
	return ((n >> index) & 1);
}
