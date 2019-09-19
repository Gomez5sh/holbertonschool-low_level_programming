#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;
	int lastdigitof;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < lastdigitof)
	{
		printf("%d %d and is greater than 5", n, lastdigitof);
	}
	if (n == lastdigitof)
	{
		printf("%d %d and is 0\n", n, lastdigitof);
	}
	if (n > lastdigitof)
	{
		printf("%d %d and is less than 6 and not 0\n", n, lastdigitof);
	}
	return (0);
}
