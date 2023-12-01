#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash_table
 * @size: size of the hash_table, which is non-negative
 *
 * Return: Return a pointer to the hash_table created,
 *         or NULL if memory allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i;
hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return (NULL);
}
hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}
hash_table->size = size;
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
return (hash_table);
}
