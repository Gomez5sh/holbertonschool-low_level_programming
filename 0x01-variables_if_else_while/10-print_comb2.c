#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int x;

for (n = '0'; n <= '9'; n++)
	{
for (x = '0'; x <= '9'; x++)
{

putchar(n);
putchar(x);

if (!(n == '0' && n == '9'))
{
putchar(',');
putchar(' ');
	}

}
}
putchar('\n');

return (0);
}
