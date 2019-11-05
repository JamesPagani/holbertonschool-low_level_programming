#include "lists.h"
/**
 * pop_listint - Removes the head node of the list and returns its data
 * @head: Head node of the list
 * Return: Data of the deleted node or 0 if the list was empty
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int data;

	if (*head == NULL)
		return (0);
	pop = *head;
	data = pop->n;

	*head = (*head)->next;
	free(pop);
	return (data);
}
