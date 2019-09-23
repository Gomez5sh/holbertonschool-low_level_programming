#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)

{
	int n, j;

	for(n=0; n<=99; n++)
	{
	for(j=0;j<=99; j++)
	{
		if(n<j)
		{
			putchar(',');
			putchar(' ');
			putchar(n/10 + '0');
			putchar(n%10 + '0');
			putchar(j/10 + '0');
			putchar(j%10 + '0');
		}
			}
	}

	putchar('\n');
return (0);
}
