#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head node of the linked list
 * @idx: Where to insert the node (Begins with 0)
 * @n: Content of the node
 * Return: Address of the new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	i++;
	node = node->next;
	while (node != NULL)
	{
		if (i == idx)
		{
			new->next = node;
			new->prev = node->prev;
			node->prev->next = new;
			node->prev = new;
			return (new);
		}
		node = node->next;
		i++;
	}
	if (i == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
