#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - count the length
 * @s: pointer
 * Return: len for uppercase
 */

int _strlen(char *str)

{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof (list_t));
	if (new == NULL && str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen((char *) str);
	new->next = *head;
	*head = new;

	return (new);
}
