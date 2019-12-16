#include "lists.h"

/**
 * sum_dlistint - print list
 * @head: pointer
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
int i = 0;

while (head)
{
i += head->n;
head = head->next;
}

 return (i);
}
