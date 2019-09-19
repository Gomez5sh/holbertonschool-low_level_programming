#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define RAND_MAX 2147483647

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
rand() - RAND_MAX / 2;

if (n < 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else if (n > 0)
{
printf("is negative");
}
return (0);
}
