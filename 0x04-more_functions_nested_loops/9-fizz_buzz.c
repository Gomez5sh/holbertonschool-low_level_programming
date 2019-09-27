#include <stdio.h>

/**
 *main - FizzBuzz
 *
 *
 *Return: is 0
 */

int main(void)

{

	int n;

	for (n = 1; n <= 100; n++)
	{

		if ((n % 3 != 0) && (n % 5 != 0))
		{
			printf("%d ", n);
		}
		else
		{
			if (n % 3 == 0)
			{
				printf("Fizz");
			}
			if (n % 5 == 0)
			{
				printf("Buzz");
			}
		}
		if (n != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
