#include "variadic_functions.h"


/**
 * print_all - print arguments
 *
 *
 * @format: constant
 *
 *Return: no return
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int n = 0;
	char *container, *pack;

	va_start(p, format);

	while (format && format[n])
	{
		pack = "";
		if (format[n + 1])
			pack = ", ";

		switch (format[n])
		{
		case 's':
			container = va_arg(p, char*);
			if (container == NULL)
				container = "(nil)";

			printf("%s%s", container, pack);
			break;

		case 'i':
			printf("%d%s", va_arg(p, int), pack);
			break;

		case 'c':
			printf("%c%s", va_arg(p, int), pack);
			break;

		case 'f':
			printf("%f%s", va_arg(p, double), pack);
			break;
		}
		n++;
	}

	va_end(p);
	printf("\n");
}
