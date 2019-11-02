#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Fntion to list the len.
 * @h: pointer.
 * size_t: Unsigned.
 * Return: node.
 **/

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
