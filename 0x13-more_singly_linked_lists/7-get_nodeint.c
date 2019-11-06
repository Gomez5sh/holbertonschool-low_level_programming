#include "lists.h"

/**
 * get_nodeint_at_index - Add node.
 * @head: pointer.
 * @index: unsigned variable.
 * Return: head.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n;

n = 0;
if (!head)
return (NULL);

while (n < index)
{
if (!head)
return (NULL);
head = head->next;
n++;
}
return (head);
}
