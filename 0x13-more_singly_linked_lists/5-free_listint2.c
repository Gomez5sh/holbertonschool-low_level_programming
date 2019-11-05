#include "lists.h"

/**
 * free_listint2 - funtion to free the memory.
 * @head: pointer.
 *
 * Return: not return.
 **/

void free_listint2(listint_t **head)
{
	if (!*head)
		return;

	if (*head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}

	*head = NULL;
}
