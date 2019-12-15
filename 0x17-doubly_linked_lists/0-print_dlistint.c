#include "lists.h"
/**
 * print_dlistint - Prints the contents of a dlistint_t linked list
 * @h: Head node of the linked list
 * Return: Amount of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
