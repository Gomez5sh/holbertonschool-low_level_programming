#include "holberton.h"

/**
 * binary_to_uint - Binary to decimal.
 * @b: pointer.
 * Return: res.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base;
	unsigned int res;

	res = 0;
	if (b != NULL)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] != '1' && b[i] != '0')
				return (0);
		}
		i--;
		for (base = 1; b[i]; i--)
		{
			if (b[i] == '0')
			{
				res += 0;
			}
			else
			{
				res += base;
			}
			base = base * 2;
		}
	}
	return (res);
}
