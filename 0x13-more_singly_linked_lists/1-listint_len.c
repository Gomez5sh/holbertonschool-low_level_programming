#include "lists.h"

/**
 * listint_len - Fntion to list the len.
 * @h: pointer.
 * size_t: Unsigned.
 * Return: node.
 **/

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
