

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - count the length
 * @s: pointer
 * Return: len for uppercase
 */

int _strlen(const char *str)

{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - funtion to create a new node
 * @head: pointer.
 * @str: pointer
 * Return: adres of the new node.
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
    {
      free(new);
		return (NULL);
    }
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
