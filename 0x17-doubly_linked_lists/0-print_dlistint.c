#include "lists.h"

/**
 * print_dlistint - Print all the elements
 * @h: Pointer.
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  size_t f;

  for (f = 0; h != NULL; f++)
    {
      if (h->next == NULL)
        {
          printf("%d\n", h->n);
          h = h->next;
          break;
        }
      printf("%d\n", h->n);
      h = h->next;
    }
  return(f);
}
