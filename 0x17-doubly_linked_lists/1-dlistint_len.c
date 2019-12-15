#include "lists.h"

/**
 * dlistint_len - Print the number of elements
 * @h: Pointer.
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t c = 0;

while (h)
{
h = h->next;
c++;
}
return (c);
}
