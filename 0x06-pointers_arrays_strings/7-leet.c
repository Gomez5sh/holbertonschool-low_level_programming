#include "holberton.h"

/**
 * leet - funtion
 * @n: The evaluated input
 * Return: dest
 */

char *leet(char *n)
{
int x, i;

char characters[10] = "aAeEoOtTlL";
char numbers[10] = "4433007711";

x = 0;

while (n[x] != '\0')
{

i = 0;

while (characters[i] != '\0')
{
if (n[x] == characters[i])
{
n[x] = numbers[i];
}
i++;
}
x++;
}
return (n);
}
