#include "lists.h"

/**
 * sum_dlistint - print list
 * @head: pointer
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
int i = 0;
dlistint_t *container = head;
while (!container)
{
i += container->n;
container = container->next;
}

return (i);
}
