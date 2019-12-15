#include "lists.h"
/**
 * dlistint_len - Counts the amount of elements in a dlistint_t linked list
 * @h: Head node of the list
 * Return: Amount of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
