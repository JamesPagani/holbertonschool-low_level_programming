#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of the listint_t linked list
 * @head: Head of the listint_t list
 * @n: Integer element of the listint_t list
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
		new->next = NULL;
	}
	return (new);
}
