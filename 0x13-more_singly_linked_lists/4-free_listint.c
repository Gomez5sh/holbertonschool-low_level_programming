#include "lists.h"

/**
 * free_listint - Funtion to free memory.
 * @head: Structur.
 *
 * Return: not return.
 **/

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free(head->next);
	free(head);
}
