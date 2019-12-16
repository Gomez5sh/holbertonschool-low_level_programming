#include "lists.h"

/**
 * get_dnodeint_at_index - Funtion to return a node 
 * @head: pointer
 * @index: iter
 *
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int iter = 0;

if (!head)
return (NULL);

while (iter != index)
{
if (!head)
return(NULL);

head = head->next;
iter++;
}
return (head);
}
