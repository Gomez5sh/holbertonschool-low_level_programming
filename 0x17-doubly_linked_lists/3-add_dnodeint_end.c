#include "lists.h"

/**
 * add_dnodeint_end - Add node to the end
 * @head: Pointer
 * @n: iter
 * Return: The addres of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *container = *head;

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

new->n = n;

if (!(*head))
{
new->prev = NULL;
new->next = *head;
*head = new;
return (new);
}

while (container->next)
container = container->next;

new->prev = container;
new->next = NULL;
container->next = new;

return (new);
}
