#include "lists.h"

/**
 * pop_listint - Delete a node.
 * @head: pointer.
 *
 * Return: 0.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int n;

  n = 0;

  if (!head)
    return (NULL);

  while (n < index)
    {
      head = head->next;
      n++;
    }
  return (head);
}
