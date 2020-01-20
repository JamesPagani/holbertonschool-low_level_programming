#include "hash_tables.h"
/**
 * insert_h_node - Insert a new hash node into the given index of the table
 * @h: Head of a hash table linked list
 * @k: Key of the new hash element
 * @v: Value asociated with @key
 * Return: Address of the new element. NULL on failure
 */

hash_node_t *insert_h_node(hash_node_t **h, const char *k, const char *v)
{
	hash_node_t *node = *h;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = malloc((1 + strlen(k)) * sizeof(char));
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->key = strdup(k);
	new->value = malloc((1 + strlen(v)) * sizeof(char));
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->value = strdup(v);
	new->next = NULL;
	if (*h == NULL)
		*h = new;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (new);
}

/**
 * hash_table_set - Creates and adds a new element to the hash table
 * @ht: Hash table to use
 * @key: Key to add
 * @value: Value associated with @key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h_index;

	if (ht == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	if (ht->size == 0)
		return (0);

	h_index = key_index((const unsigned char *)key, ht->size);
	if (insert_h_node(&(ht->array[h_index]), key, value) == NULL)
		return (0);

	return (1);
}
