#include "lists.h"

/**
 * free_listint - Funtion to free memory.
 * @head: Structur.
 *
 * Return: not return.
 **/

void free_listint(listint_t *head)
{
	if (head != 0)
	{
		free_listint(head->next);
	}
	free(head);
}
