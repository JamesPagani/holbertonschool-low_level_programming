#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at the specified index
 * @head: Head node of the list
 * @index: Specific node to delete (index starts at 0)
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = node->next;
	i++;
	while (node->next != NULL)
	{
		if (i == index)
		{
			node->prev->next = node->next;
			node->next->prev = node->prev;
			free(node);
			return (1);
		}
		node = node->next;
		i++;
	}
	if (i == index)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	return (-1);
}
