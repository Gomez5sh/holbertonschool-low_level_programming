#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end.
 * @head: pointer.
 * @n: variable.
 * Return: node or null.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *container;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		container = *head;
		while (container->next)
			container = container->next;
		container->next = new;
	}

	return (new);
}
