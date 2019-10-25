#include "variadic_functions.h"

/**
 * print_numbers - Print numbers of string
 *
 * @separator: variable 1
 * @n: variable
 *
 * Return: not return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list coso;
	unsigned int i;

	va_start(coso, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(coso, int));

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(coso);
}
