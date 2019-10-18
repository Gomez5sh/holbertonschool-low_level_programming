#include "holberton.h"

/**
 * _realloc - reallocates a memory.
 *
 * @ptr: pointer
 * @old_size: unsigned variable
 * @new_size: unsigned variable.
 * Return: pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *a;


	if (new_size == old_size)
		return (NULL);

	if (ptr == NULL)
		a = malloc(new_size);

	if (new_size == 0) && (ptr != NULL)
			   {
				   free(ptr);
				   return (NULL);
			   }







	return (ptr);
}
