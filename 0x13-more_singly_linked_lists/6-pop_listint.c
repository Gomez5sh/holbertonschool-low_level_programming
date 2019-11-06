#include "lists.h"

/**
 * pop_listint - Delete a node.
 * @head: pointer.
 *
 * Return: 0.
 **/

int pop_listint(listint_t **head)
{
listint_t *temp = *head, *pass;
int r;

if (!head || !temp)
return (0);

pass = temp->next;
r = temp->n;
free(temp);
*head = pass;
return (r);
}
