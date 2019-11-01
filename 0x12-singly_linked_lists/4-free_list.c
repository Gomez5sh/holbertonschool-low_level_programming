#include "lists.h"

/**
 * free_list - free node
 * @head: list
 * Return: void
 **/

void free_list(list_t *head)
{
	while (head != NULL)
    {
	    head = head->next;
	    free(head->str);
	    free(head->next);
    }
  free(head);
}
