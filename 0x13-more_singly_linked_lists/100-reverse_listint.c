#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: Head of the (normal) list
 * Return: Head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nxt;

	prev = NULL;
	while (nxt != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (nxt != NULL)
			*head = nxt;
	}

	return (*head);
}
