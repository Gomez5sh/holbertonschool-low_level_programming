#include "holberton.h"
/**
 * rot13 - count the characters on a string
 * @n: a pointer the integer we want to set to 402
 *
 *
 * Return: char
 */

char *rot13(char *n)
{
int l;
int a;

char c1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char c2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

l = 0;
while (n[l] != '\0')
{
a = 0;

while (c1[a] != '\0')
{
if (n[l] == c1[a])
{
n[l] = c2[a];
break;
}
a++;
}
l++;
}
return (n);
}
