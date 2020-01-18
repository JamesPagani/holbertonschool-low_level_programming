#include "hash_tables.h"
/**
 * hash_table_create - Create a new hash table
 * @size: Size of the hash table
 * Return: A pointer to the new hash table of size @size
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = malloc(sizeof(hash_table_t));

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	return (h_table);
}
