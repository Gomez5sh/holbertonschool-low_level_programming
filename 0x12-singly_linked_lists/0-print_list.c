
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
int n = 0;

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("(nil)\n");
temp = temp->next;
n++;
}
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
}
return (n);
}
