#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free node
 * @head: list
 * Return: void
 **/

void free_list(list_t *head)
{
	if (head == 0)
		return;

	free(head->next);
	free(str);
	free(head);
}
