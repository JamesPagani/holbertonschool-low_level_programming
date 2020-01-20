#include "hash_tables.h"
/**
 * insert_h_node - Insert a new hash node into the given index of the table
 * @head: Head of a hash table linked list
 * @new: New node to insert
 * Return: Address of the new element. NULL on failure
 */

hash_node_t *insert_h_node(hash_node_t **head, hash_node_t *new)
{
	hash_node_t *node = *head;

	if (head == NULL || *head == NULL)
	{
		node = new;
	}
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
	hash_node_t *new;
	hash_node_t *array;

	if (ht == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	if (ht->size == 0)
		return (0);

	h_index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc((1 + strlen(key)) * sizeof(char));
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = malloc((1 + strlen(value)) * sizeof(char));
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->value = strdup(value);
	array = ht->array[h_index];
	insert_h_node(&array, new);

	return (1);
}
