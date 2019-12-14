#include "lists.h"

/**
 * print_dlistint - Print all the elements
 * @h: Pointer.
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t f = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
f++;
}
return (f);
}
