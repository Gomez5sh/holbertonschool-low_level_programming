#include "holberton.h"

/**
 * string_toupper - funtion
 * @n: The evaluated input
 * Return: dest
 */

char *string_toupper(char *n)
{

	int x, y;

	y = 0;

	while (n[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x++)
	{
		if (n[x] >= 97 && n[x] <= 122)
		{
		n[x] = n[x] - 32;
		}
	}

	return (n);
}
