#include "lists.h"
/**
 * free_listint - Frees a previously created list
 * @head: Head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
