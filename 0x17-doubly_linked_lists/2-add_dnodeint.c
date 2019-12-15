#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of the dlistint_t list
 * @head: Head node of the linked list
 * @n: Content of the linked list node
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
