#include "lists.h"

/**
 * add_dnodeint - Add al the new nodes
 * @head: Doble pointer
 * @n: iter
 *
 * The adrees of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = 0;

if (!head)
return (NULL);

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

new->n = n;

new->prev = NULL;
new->next = *head;

if (*head)
(*head)->prev = new;

*head = new;

return (new);
}
