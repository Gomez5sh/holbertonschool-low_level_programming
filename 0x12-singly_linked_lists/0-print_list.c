#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t n;

	while (temp != NULL)
	{
		temp->str? printf("[%u], %s\n", temp->len, temp->str):
			printf("[%u], %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}
