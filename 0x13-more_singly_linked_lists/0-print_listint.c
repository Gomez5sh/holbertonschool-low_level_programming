#include "lists.h"

/**
 * print_listint - Funtion to print list
 * @h: Structur pointer
 *
 * Return: node
 **/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
