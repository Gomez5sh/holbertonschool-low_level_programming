#include "lists.h"

/**
 * free_listint2 - funtion to free the memory.
 * @head: pointer.
 *
 * Return: not return.
 **/

void free_listint2(listint_t **head)
{
	listint_t *container, *fr;

	container = *head;
	fr = *head;

	while (container->next != 0)
	{
		container = container->next;
		free(fr);
	}
}
