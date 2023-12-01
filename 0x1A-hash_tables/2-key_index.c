#include "hash_tables.h"
/**
 * key_index - computes the index for a given key and hash table size
 * @key: key string
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;
return (index);
}
