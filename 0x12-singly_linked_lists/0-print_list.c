#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print list funtion.
 * @h: Variable.
 * Return: node.
 **/

size_t print_list(const list_t *h)
{
const list_t *temp = h;
int n;

n = 0;

while (temp != NULL)
{
temp->str ? printf("[%u] %s\n", temp->len, temp->str) :
printf("[0] %p\n", temp->str);
temp = temp->next;
n++;
}
return (n);
}
