#include "lists.h"
/**
 * free_dlistint - Frees the memory used for the linked list
 * @head: Head node of the linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
	{
		node = head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		while (node != head)
		{
			node = node->prev;
			free(node->next);
		}
		free(node);
	}
}
