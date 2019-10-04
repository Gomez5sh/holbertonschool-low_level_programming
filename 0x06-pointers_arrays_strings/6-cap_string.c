#include "holberton.h"

/**
 * cap_string - funtion
 * @n: The evaluated input
 * Return: dest
 */

char *cap_string(char *n)
{

	int x, y;

	y = 0;

	while (n[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x++)
	{

		if ((x == 0) && (n[x] >= 97 && n[x] <= 122))
		{
			n[x] = n[x] - 32;
		}
		if ((x[n] == ' ' || x[n] == '\n' || x[n] == ',' ||
		     x[n] == ';' || x[n] == '.' || x[n] == '!' ||
		     x[n] == '?' || x[n] == '"' || x[n] == '(' ||
		     x[n] == ')' || x[n] == '{' || x[n] == '}' ||
		     x[n] == 9) && (n[x + 1] >= 97 && n[x + 1] <= 122))
		{
			n[x + 1] = n[x + 1] - 32;
		}
	}

	return (n);
}
