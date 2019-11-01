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
	const list_t *temp = h;
	size_t n;

	n = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
