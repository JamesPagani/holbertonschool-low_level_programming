#include "lists.h"
/**
 * sum_listint - Sums all the data (all integers) stored in the list
 * @head: Head of the list
 * Return: Sum of all the data of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
