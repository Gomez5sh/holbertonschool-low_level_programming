#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: Variable
 * @n: Variable
 *
 * Return: not return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cast;
	unsigned int i;
	char *p;

	va_start(cast, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(cast, char *);

		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(cast);
}
