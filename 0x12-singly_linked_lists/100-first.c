#include <stdio.h>
/**
 * inf - prints message before main.c is executed.
 *
 * Description: function that prints a msg d'un conte "le lièvre et la tortue"
 * Return: nothing
 */
void inf(void) __attribute__((constructor));
void inf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
