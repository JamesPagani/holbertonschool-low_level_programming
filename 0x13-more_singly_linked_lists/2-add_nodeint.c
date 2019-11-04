#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Head of the listint_t list
 * @n: An element of the node (an integer)
 * Return: Address of the new node on success. NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

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
		new->next = *head;
		*head = new;
	}

	return (*head);
}
