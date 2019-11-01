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
	if (new == NULL && str == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen((char *) str);
	new->next = *head;
	*head = new;

	return (new);
}
