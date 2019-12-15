#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the nth index of a dlistint_t linked list
 * @head: Head node of the linked list
 * @index: Node to get (index starts with 0)
 * Return: Address of the @index node. Returns NULL if the node is not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
