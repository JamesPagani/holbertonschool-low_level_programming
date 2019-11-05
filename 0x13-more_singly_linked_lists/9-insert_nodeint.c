#include "lists.h"
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
