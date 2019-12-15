#include "lists.h"

/**
 * free_dlistint - free all nodes of a list
 * @head: input list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
if (head != 0)
free_dlistint(head->next);

free(head);
}
