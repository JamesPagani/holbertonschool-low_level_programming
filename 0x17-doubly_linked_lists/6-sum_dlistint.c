#include "lists.h"
/**
 * sum_dlistint - Sums all the numbers stored in a dlistint_t linked list
 * @head: Head node of the linked list
 * Return: Total sum of all numbers sotred in the dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int result = 0;

	while (node != NULL)
	{
		result += node->n;
		node = node->next;
	}
	return (result);
}
