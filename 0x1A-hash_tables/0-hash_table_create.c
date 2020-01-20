#include "hash_tables.h"

/**
 * hash_table_create - Create hash table
 * @size: size of the table
 * Return:hash array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash;

hash = malloc(sizeof(hash_table_t));

if (!hash)
return (NULL);

if (size == 0)
return (NULL);

hash->array = calloc(size, sizeof(hash_node_t *));
if (!(hash->array))
{
free(hash);
return (NULL);
}
hash->size = size;

return (hash);

}
