#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char a;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
