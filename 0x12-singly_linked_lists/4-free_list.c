#include "lists.h"
/**
 * free_list - Frees a previously created list
 * @head: Entry point of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
