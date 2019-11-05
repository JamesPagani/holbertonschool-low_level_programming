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

/**
 * insert_nodeint_at_index - Insert a node at the EXACT specified index
 * @head: Head of the list
 * @idx: Index to place the node
 * @n: Data of the new node
 * Return: The address of the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp_h = *head;
	unsigned int i = 0;

	if (idx == 0)
		return (add_nodeint(head, n));
	i++;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (tmp_h != NULL)
	{
		if (i == idx)
		{
			new->next = tmp_h->next;
			tmp_h->next = new;
			return (tmp_h);
		}
		i++;
		tmp_h = tmp_h->next;
	}
	return (NULL);
}
