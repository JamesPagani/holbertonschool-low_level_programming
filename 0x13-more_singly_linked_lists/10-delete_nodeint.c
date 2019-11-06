#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at the EXACT index
 * @head: Head of the list
 * @index: Node to delete (0-index notation)
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_h = *head;
	listint_t *del = *head;
	unsigned int i = 0;

	if (*head != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			del->next = NULL;
			free(del);
			return (1);
		}
		i++;
		del = del->next;

		while (del != NULL)
		{
			if (i == index)
			{
				tmp_h->next = del->next;
				del->next = NULL;
				free(del);
				return (1);
			}
			del = del->next;
			tmp_h = tmp_h->next;
			i++;
		}
	}
	return (-1);
}
