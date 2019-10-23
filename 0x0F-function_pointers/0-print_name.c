#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name.
 *
 * @name: pointer char.
 * @f: pointer void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
