#include "lists.h"

/**
 * pop_listint - Delete a node.
 * @head: pointer.
 *
 * Return: 0.
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return (0);

	if (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
	}
	*head = (*head)->next;
	return (temp->n);
}
