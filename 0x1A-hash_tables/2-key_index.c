#include "hash_tables.h"
/**
 * key_index - find value at index key
 * @key: key in hash table
 * @size: size of table
 * Return: value at index or NULL
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
unsigned long int index;

if (!key)
return (0);

if (size == 0)
return (0);

hash = hash_djb2(key);
index = hash % size;

return (index);
}
