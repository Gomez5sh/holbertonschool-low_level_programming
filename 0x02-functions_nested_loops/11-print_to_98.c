#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the secuence from n to 98
 * @y: The evaluated input
 *
 * Description: Prints the secuence from n to 98
 * Return: 0 Value if it works
 */

void print_to_98(int y)

{
if (y < 98)
{
for (; y < 98; y++)
{
printf("%d, ", y);
}
printf("98\n");
}
else if (y > 98)
{
for (; y > 98; y--)
{
printf("%d, ", y);
}
printf("98\n");
}
else
{
printf("98\n");
}
}
