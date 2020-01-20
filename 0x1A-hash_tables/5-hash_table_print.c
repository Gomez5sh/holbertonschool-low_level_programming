#include "hash_tables.h"

/**
 * hash_table_print - print like a dict
 * @ht:hash table to be printed
 * Return: print like a dict.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *seeker;
unsigned int i;
int n = 0;

if (!ht)
return (NULL);

for (i = 0; i < ht->size ; i++)
{
seeker = ht->array[i];
while (seeker)
{
if (n)
printf(", ");
else:
printf("'%s': '%s'",seeker->key, seeker->value);
seeker = n->next;
n = 1;
}
 printf("}\n");
}
