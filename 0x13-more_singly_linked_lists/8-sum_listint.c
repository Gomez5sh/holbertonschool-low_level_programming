#include "lists.h"

/**
 * sum_listint - sum of all the data.
 * @head: pointer.
 *
 * Return: 0.
 */
int sum_listint(listint_t *head)
{
	int new;

	if (head == NULL)
		return (0);

  new = 0;

	while (head != 0)
    {
      new += head->n;
      head = head->next;
    }

	return (new);
}
