#include "lists.h"
/**
 * get_nodeint_at_index - Gets the nth node of the list
 * @head: Head node of the list
 * @index: Target node (0-index style)
 * Return: nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
