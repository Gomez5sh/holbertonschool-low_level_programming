#include "lists.h"

/**
 * add_nodeint - funtion to add a new node.
 * @head: pointer.
 * @n: variable.
 * Return: null or node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
