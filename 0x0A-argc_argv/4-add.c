#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

int i,j ,n;

i = 1;
j = 0;
n = 0;

if (argc > 1)
{
while (i < argc)
{
while (argv[i][j] != 0)
{
if (!isdigit(argv[i][j++]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i++]);
}
}
printf("%d\n", n);
return (0);
}
