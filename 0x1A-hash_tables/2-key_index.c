#include "hash_tables.h"
/**
 * key_index - Get the index of a given key
 * @key: A hash table key
 * @size: Size of the hash table
 * Return: Index of the @key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
